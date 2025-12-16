#pragma once

#include "BaseDeviceCreator.h"

class AlarmCreator : public BaseDeviceCreator {
public:
    virtual DeviceRequest createDevice(DeviceRequest request);
};
