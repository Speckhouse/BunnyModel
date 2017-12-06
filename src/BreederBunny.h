//
// Created by isa2015 on 6.12.17.
//

#ifndef IMS_BREEDERBUNNY_H
#define IMS_BREEDERBUNNY_H

#include "simlib.h"
#include "ModelParameters.h"
#include "ModelStores.h"
#include "ModelFacilities.h"
#include "Inseminator.h"

class BreederBunny : public Process {
    protected:
        const ModelParameters &mParams;
        ModelStores &mSto;
        ModelFacilities &mFac;
        bool mGateCloser = false;
    public:
        BreederBunny(const ModelParameters &params, ModelStores &sto, ModelFacilities &Fac);
        BreederBunny(bool isInitial,const ModelParameters &params, ModelStores &sto, ModelFacilities &Fac);
        void discard();
        void Behavior();
};


#endif //IMS_BREEDERBUNNY_H
