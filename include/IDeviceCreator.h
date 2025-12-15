#pragma once

#include "DeviceRequest.h"
#include "IDeviceFactory.h"

class IDeviceCreator {
public:
    virtual ~IDeviceCreator() {}

    virtual void setNext(IDeviceCreator* next) = 0;
    virtual void setFactory(IDeviceFactory* factory) = 0;
    virtual DeviceRequest createDevice(DeviceRequest request) = 0;
};
