#ifndef IMS_BABYBUNNY_H
#define IMS_BABYBUNNY_H

#include "simlib.h"
#include "ModelParameters.h"
#include "ModelStores.h"
#include "ModelFacilities.h"

class BabyBunny : public Process {
    protected:
        const ModelParameters &mParams;
        ModelStores &mSto;
        ModelFacilities &mFac;
    public:
        BabyBunny(const ModelParameters &params, ModelStores &sto, ModelFacilities &Fac);
        void Behavior();
};


#endif //IMS_BABYBUNNY_H
