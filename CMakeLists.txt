cmake_minimum_required(VERSION 2.8.12.2)
project(IMS)
set(CMAKE_CXX_STANDARD 11)
link_directories(${CMAKE_SOURCE_DIR}/lib)

add_library(simlib STATIC IMPORTED) # or STATIC instead of SHARED

set_target_properties(simlib PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/lib/libsimlib.a"
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}/lib/"
        )

add_executable(IMS src/main.cpp src/ModelParameters.cpp src/ModelParameters.h src/BreederBunny.cpp src/BreederBunny.h src/BabyBunny.cpp src/BabyBunny.h src/NewBreederBunny.cpp src/NewBreederBunny.h src/ModelFacilities.cpp src/ModelFacilities.h src/Inseminator.cpp src/Inseminator.h src/InitEvent.cpp src/InitEvent.h src/ModelStores.cpp src/ModelStores.h)

target_link_libraries(IMS simlib)