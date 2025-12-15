#pragma once

#include "BaseDeviceCreator.h"

class DetectorCreator : public BaseDeviceCreator {
public:
    virtual DeviceRequest createDevice(DeviceRequest request);
};
