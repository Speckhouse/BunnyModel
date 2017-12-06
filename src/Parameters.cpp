//
// Created by isa2015 on 6.12.17.
//

#include "Parameters.h"

unsigned long Parameters::getBreederBunnyCap() const {
    return mBreederBunnyCap;
}

double Parameters::getBreederBunnyDiscardChance() const {
    return mBreederBunnyDiscardChance;
}

double Parameters::getPregnancyTime() const {
    return mPregnancyTime;
}

double Parameters::getBirthChance() const {
    return mBirthChance;
}

double Parameters::getBirthToInseminationTime() const {
    return mBirthToInseminationTime;
}
