#pragma once

#include "BaseDeviceCreator.h"

class TVCreator : public BaseDeviceCreator {
public:
    virtual DeviceRequest createDevice(DeviceRequest request);
};
