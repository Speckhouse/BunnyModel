//
// Created by isa2015 on 6.12.17.
//

#ifndef IMS_INITEVENT_H
#define IMS_INITEVENT_H

#include "simlib.h"
#include "ModelParameters.h"
#include "ModelStores.h"
#include "ModelFacilities.h"
#include "BreederBunny.h"

class InitBunnyRequest : public Process {
protected:
    ModelStores &mSto;
    const ModelParameters &mParams;
public:
    InitBunnyRequest(const ModelParameters &params,ModelStores &sto);
    void Behavior();
};

class InitEvent : public Event {
protected:
    const ModelParameters &mParams;
    ModelStores &mSto;
    ModelFacilities &mFac;
public:
    InitEvent(const ModelParameters &params, ModelStores &sto, ModelFacilities &fac);
    void Behavior();
};


#endif //IMS_INITEVENT_H


