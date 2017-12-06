//
// Created by isa2015 on 6.12.17.
//

#ifndef IMS_ModelParameters_H
#define IMS_ModelParameters_H

#include "simlib.h"

class ModelParameters {
    protected:
    const unsigned long mBreederBunnyCap = 80;

    const double mBreederBunnyDiscardChance = 0.18;
    const double mInseminatorDelayMin = 0;
    const double mInseminatorDelayMax = 2;
    const double mInseminatorStayTime = 0.5;

    const double mPregnancyTime = 30.0;
    const double mBirthChance = 0.8;
    const double mBirthToInseminationTime = 21.0;
    const unsigned int mLitterSizeMin = 8;
    const unsigned int mLitterSizeMax = 10;


public:
    unsigned long getBreederBunnyCap() const;

    double getBreederBunnyDiscardChance() const;
    double getPregnancyTime() const;
    double getBirthChance() const;
    double getBirthToInseminationTime() const;
    double getInseminatorDelay() const;
    double getInseminatorStayTime() const;
    unsigned int getLitterSize() const;

};


#endif //IMS_ModelParameters_H
