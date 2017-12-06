//
// Created by isa2015 on 6.12.17.
//

#include "BreederBunny.h"
#include "BabyBunny.h"

BreederBunny::BreederBunny(const ModelParameters &params,ModelStores &sto, ModelFacilities &fac)
        : Process(), mParams(params), mSto(sto), mFac(fac){}
BreederBunny::BreederBunny(bool isInitial ,const ModelParameters &params,ModelStores &sto, ModelFacilities &fac)
        : Process(), mParams(params), mSto(sto), mFac(fac){
    if (isInitial) Enter(mSto.mBreedersNotReady,1);
}

void BreederBunny::discard(){
    Leave(mSto.mBreederBunnyCap);
    Enter(mSto.mBreederRequests, 1);
    if(mSto.mBreederRequests.Full()){
        for (int i = 0;i<mParams.getBreederBunnyBuyAmount();i++) {
            Leave(mSto.mBreederRequests, 1);
        }
        Wait(mParams.getBreederBunnyArrivalDelay());
        for (int i = 0;i<mParams.getBreederBunnyBuyAmount();i++) {
            Enter(mSto.mBreedersNotReady,1);
            (new BreederBunny(mParams,mSto,mFac))->Activate;
        }
    }
}

void BreederBunny::Behavior() {
    if (mSto.mBreederBunnyCap.Full()){
        Leave(mSto.mBreedersNotReady);
        this->discard();
        return;
    }
    Enter(mSto.mBreederBunnyCap,1);
    for(;;){
        Leave(mSto.mBreedersNotReady,1);

        if (mSto.mBreedersNotReady.Empty()) {
            Release(mFac.mBreedGate);
            mGateCloser = true;
            (new Inseminator(mParams,mFac))->Activate();
        }
        else if (mSto.mBreedersNotReady.Full()) this->discard();
        else {
            Seize(mFac.mBreedGate);
            Release(mFac.mBreedGate);
        }

        if(Random() < mParams.getBreederBunnyDiscardChance()){
            this->discard();
            break;
        }

        Enter(mSto.mBreedersNotReady,1);

        Seize(mFac.mInseminatorService);
        Release(mFac.mInseminatorService);

        if(mGateCloser) {
            Seize(mFac.mBreedGate);
            mGateCloser = false;
        }

        if(Random() > mParams.getBirthChance()) {
            (mParams.getPregnancyTime());
            for (int i=0;i<mParams.getLitterSize();i++) (new BabyBunny(mParams,mSto,mFac))->Activate();
        }
        Wait(mParams.getBirthToInseminationTime());

    }
}
