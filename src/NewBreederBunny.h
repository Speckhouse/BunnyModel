#ifndef IMS_NEWBREEDERBUNNY_H
#define IMS_IMS_NEWBREEDERBUNNY_H

#include "simlib.h"
#include "ModelParameters.h"
#include "ModelStores.h"
#include "ModelFacilities.h"
#include "BreederBunny.h"

class NewBreederBunny : public Process {
    protected:
        const ModelParameters &mParams;
        ModelStores &mSto;
        ModelFacilities &mFac;
    public:
        NewBreederBunny(const ModelParameters &params, ModelStores &sto, ModelFacilities &Fac);
        void Behavior();
};


#endif //IMS_IMS_NEWBREEDERBUNNY_H
