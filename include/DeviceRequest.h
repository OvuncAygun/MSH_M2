#pragma once

#include <string>
#include <vector>
#include "DeviceType.h"
#include "IDevice.h"

struct DeviceRequest {
    DeviceType deviceType;
    std::string name;
    std::vector<std::string> config;
    int count;
    std::vector<IDevice*> deviceVector;

    DeviceRequest()
        : deviceType(DEVICE_LIGHT), count(0) {}
};
