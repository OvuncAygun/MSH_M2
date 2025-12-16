#pragma once

#include <string>
#include <vector>
#include "DeviceCreationType.h"
#include "IDevice.h"

struct DeviceRequest {
    DeviceCreationType deviceCreationType;
    std::string name;
    std::vector<std::string> config;
    int count;
    std::vector<IDevice*> deviceVector;
};
