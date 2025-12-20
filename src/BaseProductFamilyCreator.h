#pragma once

#include "IDeviceCreator.h"
#include "IProductFamilyFactory.h"
#include "DeviceRequest.h"

class BaseProductFamilyCreator : public IDeviceCreator {
protected:
    IProductFamilyFactory* productFamilyFactory;
    int index;

public:
    BaseProductFamilyCreator();
    virtual ~BaseProductFamilyCreator();

    virtual void setNext(IDeviceCreator* next);
    virtual void setFactory(IProductFamilyFactory* factory);

    virtual DeviceRequest createDevice(DeviceRequest request) override;

};
