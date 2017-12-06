//
// Created by isa2015 on 6.12.17.
//

#ifndef IMS_MODELSTORES_H
#define IMS_MODELSTORES_H

#include "simlib.h"
#include "ModelParameters.h"

class ModelStores {
public:
    Store mBreedersNotReady;
    Store mBreederBunnyCap;
    Store mBreederRequests;

    ModelStores(const ModelParameters &params);

};


#endif //IMS_MODELSTORES_H
