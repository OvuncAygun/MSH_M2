#pragma once

#include "DeviceRequest.h"
#include "IDeviceFactory.h"

class IDeviceCreator {
public:
    virtual ~IDeviceCreator() {}

    void setNext(IDeviceCreator* next);
    virtual DeviceRequest createDevice(DeviceRequest request) = 0;

protected:
    IDeviceCreator* nextCreator;
};
