#pragma once

#include <string>
#include <vector>
#include "IDevice.h"

class IDeviceFactory {
public:
    virtual ~IDeviceFactory() {}

    virtual IDevice* createDevice(
        const std::string& name,
        const std::vector<std::string>& config
    ) = 0;

    virtual IDevice* cloneDevice(IDevice* source) = 0;
};
