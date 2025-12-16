#pragma once

#include "IDeviceCreator.h"
#include "IProductFamilyFactory.h"
#include "DeviceRequest.h"

class BaseProductFamilyCreator : public IDeviceCreator {
protected:
    IDeviceCreator* nextCreator;
    IProductFamilyFactory* productFamilyFactory;

public:
    BaseProductFamilyCreator();
    virtual ~BaseProductFamilyCreator();

    virtual void setNext(IDeviceCreator* next);
    virtual void setFactory(IProductFamilyFactory* factory);

    // Chain of Responsibility entry
    virtual DeviceRequest createDevice(DeviceRequest request);
};
