//
// Created by isa2015 on 6.12.17.
//

#ifndef IMS_MODELPARAMETERS_H
#define IMS_MODELPARAMETERS_H

#include "simlib.h"

class ModelParameters {
    protected:
    const unsigned long mBreederBunnyCap = 80;
    const unsigned long mBreederBunnyInitialRequests = 10;
    const unsigned long mBreederBunnyInitial = 80;
    const unsigned long mBreederBunnyBuyTreshold = 50;
    const unsigned long mBreederBunnyBuyAmount = 15;

    const double mBreederBunnyArrivalDelay = 50;
    const double mBreederBunnyDiscardChance = 0.18;
    const double mDieWhileAdolescenceChance = 0.05;
    const double mInseminatorDelayMin = 0;
    const double mInseminatorDelayMax = 2;
    const double mInseminatorStayTime = 0.5;

    const double mPregnancyTime = 30.0;
    const double mBirthChance = 0.8;
    const double mBirthToInseminationTime = 21.0;
    const unsigned int mNewBreederBunnyWaitMin = 91;
    const unsigned int mNewBreederBunnyWaitMax = 105;
    const unsigned int mAdolescenceTime = 35;
    const unsigned int mLitterSizeMin = 8;
    const unsigned int mLitterSizeMax = 10;
    const double mFemaleBirthChance = 0.49;



public:
    unsigned long getBreederBunnyCap() const;

    double getBreederBunnyDiscardChance() const;
    double getPregnancyTime() const;
    double getBirthChance() const;
    double getBirthToInseminationTime() const;
    double getInseminatorDelay() const;
    double getInseminatorStayTime() const;
    unsigned int getLitterSize() const;
    unsigned int getBreederBunnyInitialRequests() const;
    unsigned int getBreederBunnyInitial() const;
    unsigned int getBreederBunnyTotalRequested() const;
    unsigned int getBreederBunnyBuyTreshold() const;
    unsigned int getBreederBunnyBuyAmount() const;
    double getBreederBunnyArrivalDelay() const;

    double getAdolescenceTime() const;
    double getFemaleBirthChance() const;
    double getDieWhileAdolescenceChance() const;
    double getNewBreederBunnyWait() const;

};


#endif //IMS_MODELPARAMETERS_H
