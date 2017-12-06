//
// Created by isa2015 on 6.12.17.
//

#include <search.h>
#include "InitEvent.h"

InitEvent::InitEvent(const ModelParameters &params, ModelStores &sto, ModelFacilities &fac) : Event(), mParams(params), mSto(sto), mFac(fac) {
}

void InitEvent::Behavior(){
    for(int i=0;i<mParams.getBreederBunnyInitial();i++){

        (new BreederBunny(true,mParams,mSto,mFac))->Activate();

    }
    (new InitBunnyRequest(mParams,mSto))->Activate();
}

InitBunnyRequest::InitBunnyRequest(const ModelParameters &params, ModelStores &sto) : Process(), mParams(params), mSto(sto) {

}

void InitBunnyRequest::Behavior() {
    for (int i = 0; i < mParams.getBreederBunnyInitialRequests();i++ ) Enter(mSto.mBreederRequests);
}
