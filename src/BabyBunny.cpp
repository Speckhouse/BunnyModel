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
        //Odber samic do chovu
    }

    if(Random() < mParams.getDieWhileAdolescenceChance()){
        return;
    }

    if(mFac.mOrderActive.Busy()){
        //todo
        //Jdou na objedn8vku
    }else{
        //Jdou na jatka
    }

    return;
}

