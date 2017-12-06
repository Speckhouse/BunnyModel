//
// Created by isa2015 on 6.12.17.
//

#include "Inseminator.h"

Inseminator::Inseminator(const ModelParameters &params, ModelFacilities &fac) :
        Process(), mParams(params), mFac(fac) {

}

void Inseminator::Behavior() {
    Wait(mParams.getInseminatorDelay());
    Relese(mFac.mInseminatorService);
    Wait(mParams.getInseminatorStayTime());
    Seize(mFac.mInseminatorService);
}
