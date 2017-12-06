//
// Created by isa2015 on 6.12.17.
//

#include "BreederBunny.h"
#include "Inseminator.h"

BreederBunny::BreederBunny(const ModelParameters &params,ModelStores &sto, ModelFacilities &fac)
        : Process(), mParams(params), mSto(sto), mFac(fac){}


void BreederBunny::Behavior() {
    for(;;){
        if (mSto.mBreedersNotReady.Empty()) {
            Release(mFac.mBreedGate);
            mGateCloser = true;
            (new Inseminator(mParams,mFac))->Activate();
        }
        else {
            Seize(mFac.mBreedGate);
            Release(mFac.mBreedGate);
        }

        if(Random() < mParams.getBreederBunnyDiscardChance())
            //todo
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
            Wait(mParams.getPregnancyTime());
            
        }



        Leave(mSto.mBreedersNotReady,1);
    }
}
