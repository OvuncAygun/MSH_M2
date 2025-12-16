#pragma once

#include "IDeviceCreator.h"
#include "IDeviceFactory.h"
#include "DeviceRequest.h"

class BaseDeviceCreator : public IDeviceCreator {
protected:
    IDeviceCreator* nextCreator;
    IDeviceFactory* deviceFactory;

public:
    BaseDeviceCreator();
    virtual ~BaseDeviceCreator();

    virtual void setNext(IDeviceCreator* next);
    virtual void setFactory(IDeviceFactory* factory);

    // Chain of Responsibility entry
    virtual DeviceRequest createDevice(DeviceRequest request);
};
