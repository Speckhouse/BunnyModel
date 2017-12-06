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

unsigned int ModelParameters::getBreederBunnyInitialRequests() const {
    return mBreederBunnyInitialRequests;
}
unsigned int ModelParameters::getBreederBunnyInitial() const {
    return mBreederBunnyInitial;
}

unsigned int ModelParameters::getBreederBunnyTotalRequested() const {
    return mBreederBunnyInitial + mBreederBunnyInitialRequests;
}

unsigned int ModelParameters::getBreederBunnyBuyTreshold() const {
    return mBreederBunnyBuyTreshold;
}

unsigned int ModelParameters::getBreederBunnyBuyAmount() const {
    return mBreederBunnyBuyAmount;
}

double ModelParameters::getBreederBunnyArrivalDelay() const {
    return mBreederBunnyArrivalDelay;
}


double ModelParameters::getAdolescenceTime() const {
    return mAdolescenceTime;
}

double ModelParameters::getFemaleBirthChance() const {
    return mFemaleBirthChance;
}

double ModelParameters::getDieWhileAdolescenceChance() const {
    return mDieWhileAdolescenceChance;
}

double ModelParameters::getNewBreederBunnyWait() const {
    return mNewBreederBunnyWaitMin + Random() * (mNewBreederBunnyWaitMax - mNewBreederBunnyWaitMin);
}




