#include <iostream>
#include "simlib.h"
#include "ModelParameters.h"
#include "ModelStores.h"
#include "ModelFacilities.h"
#include "InitEvent.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    ModelParameters *params = new ModelParameters();
    ModelStores *stores = new ModelStores(*params);
    ModelFacilities *facilities = new ModelFacilities();
    Init(0,100);
    InitEvent *ie = new InitEvent(*params,*stores,*facilities);
    ie->Activate();
    return 0;
}