#pragma once

#include "IDeviceFactory.h"
#include "AlarmDevice.h"

class AlarmFactory : public IDeviceFactory {
public:
    virtual IDevice* createDevice(
        const std::string& name,
        const std::vector<std::string>& config
    );

    virtual IDevice* cloneDevice(IDevice* source);
};
