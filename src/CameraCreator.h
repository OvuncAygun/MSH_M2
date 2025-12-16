#pragma once

#include "BaseDeviceCreator.h"

class CameraCreator : public BaseDeviceCreator {
public:
    virtual DeviceRequest createDevice(DeviceRequest request);
};
