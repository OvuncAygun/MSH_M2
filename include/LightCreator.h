#pragma once

#include "BaseDeviceCreator.h"

class LightCreator : public BaseDeviceCreator {
public:
    virtual DeviceRequest createDevice(DeviceRequest request);
};
