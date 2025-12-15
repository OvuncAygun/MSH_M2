#pragma once

#include "BaseDeviceCreator.h"

class MusicCreator : public BaseDeviceCreator {
public:
    virtual DeviceRequest createDevice(DeviceRequest request);
};
