//
// Created by isa2015 on 6.12.17.
//

#ifndef IMS_INITEVENT_H
#define IMS_INITEVENT_H

#include "simlib.h"
#include "ModelParameters.h"
#include "ModelStores.cpp"
#include "ModelFacilities.h"
#include "BreederBunny.h"

class InitEvent : Event {
protected:
    const ModelParameters &mParams;
    ModelStores &mSto;
    ModelFacilities &mFac;
public:
    InitEvent(ModelParameters &params, ModelStores &sto, ModelFacilities &fac);
    void Behavior();
};


#endif //IMS_INITEVENT_H


