//
// Created by isa2015 on 6.12.17.
//

#ifndef IMS_PARAMETERS_H
#define IMS_PARAMETERS_H

class Parameters {
    protected:
    unsigned long mBreederBunnyCap = 80;

    double mBreederBunnyDiscardChance = 0.18;
    double mPregnancyTime = 30.0;
    double mBirthChance = 0.8;
    double mBirthToInseminationTime = 21.0;
public:
    unsigned long getBreederBunnyCap() const;

    double getBreederBunnyDiscardChance() const;
    double getPregnancyTime() const;
    double getBirthChance() const;
    double getBirthToInseminationTime() const;


};


#endif //IMS_PARAMETERS_H
