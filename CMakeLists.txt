cmake_minimum_required(VERSION 3.10)
project(MSH_M2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(MSH_M2)

target_link_libraries(MSH_M2 PUBLIC MSH_M1)

target_include_directories(MSH_M2
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
    
    PRIVATE
        src
)

target_sources(MSH_M2
    PRIVATE
        src/MSH_M2.cpp
        src/DeviceManager.cpp

        src/IDeviceCreator.cpp
        src/BaseDeviceCreator.cpp
        src/BaseProductFamilyCreator.cpp
        src/AlarmCreator.cpp
        src/CameraCreator.cpp
        src/LightCreator.cpp
        src/DetectorCreator.cpp
        src/MusicCreator.cpp
        src/TVCreator.cpp
    
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include/MSH_M2.h
        ${CMAKE_CURRENT_SOURCE_DIR}/include/IDeviceManager.h
        ${CMAKE_CURRENT_SOURCE_DIR}/include/DeviceCreationType.h
)

include(CTest)
enable_testing()

