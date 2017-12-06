#include <iostream>
#include "simlib.h"
#include "ModelParameters.h"
#include "ModelStores.h"
#include "ModelFacilities.h"
#include "ModelQueues.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    ModelParameters params = ModelParameters();
    ModelQueues queues = ModelQueues();
    ModelStores stores = ModelStores(params);
    ModelFacilities facilities = ModelFacilities();



    return 0;
}