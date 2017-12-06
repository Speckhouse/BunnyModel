#include "NewBreederBunny.h"

NewBreederBunny::NewBreederBunny(const ModelParameters &params,ModelStores &sto, ModelFacilities &fac)
        : Process(), mParams(params), mSto(sto), mFac(fac){}


void NewBreederBunny::Behavior() {

    Wait(mParams.getNewBreederBunnyWait());
    Enter(mSto.mBreedersNotReady, 1);
    (new BreederBunny(mParams,mSto,mFac))->Activate();

    return;
}

