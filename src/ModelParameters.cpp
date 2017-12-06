//
// Created by isa2015 on 6.12.17.
//

#include "ModelParameters.h"

unsigned long ModelParameters::getBreederBunnyCap() const {
    return mBreederBunnyCap;
}

double ModelParameters::getBreederBunnyDiscardChance() const {
    return mBreederBunnyDiscardChance;
}

double ModelParameters::getPregnancyTime() const {
    return mPregnancyTime;
}

double ModelParameters::getBirthChance() const {
    return mBirthChance;
}

double ModelParameters::getBirthToInseminationTime() const {
    return mBirthToInseminationTime;
}

double ModelParameters::getInseminatorDelay() const {
    return mInseminatorDelayMin + Random() * (mInseminatorDelayMax-mInseminatorDelayMin);
}

double ModelParameters::getInseminatorStayTime() const {
    return mInseminatorStayTime;
}

unsigned int ModelParameters::getLitterSize() const {
    return mLitterSizeMin + (int)(Random() * (mLitterSizeMax-mLitterSizeMin));
}






