//
// Created by isa2015 on 6.12.17.
//

#ifndef IMS_INSEMINATOR_H
#define IMS_INSEMINATOR_H

#include "ModelParameters.h"
#include "ModelFacilities.h"

class Inseminator : public Process {
protected:
    const ModelParameters &mParams;
    ModelFacilities &mFac;
public:
    Inseminator(const ModelParameters &params, ModelFacilities &fac);
    void Behavior();
};


#endif //IMS_INSEMINATOR_H
