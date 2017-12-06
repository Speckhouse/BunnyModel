#include "BabyBunny.h"

BabyBunny::BabyBunny(const ModelParameters &params,ModelStores &sto, ModelFacilities &fac)
        : Process(), mParams(params), mSto(sto), mFac(fac){}


void BabyBunny::Behavior() {

    Wait(mParams.getAdolescenceTime());

    if(Random() < mParams.getDieWhileAdolescenceChance()){
        return;
    }
    //samec nebo samice
    if(Random() < mParams.getFemaleBirthChance()){
        if(!mSto.mBreederRequests.Empty()){
            (new NewBreederBunny(mParams,mSto,mFac))->Activate();
            return;
        }
    }

    if(mFac.mOrderActive.Busy()){
        //todo
        //Jdou na objedn8vku
    }else{
        //Jdou na jatka
    }

    return;
}

