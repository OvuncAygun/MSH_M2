#pragma once

#include "IDeviceManager.h"
#include "IDeviceFactory.h"
#include "IProductFamilyFactory.h"

class MSH_M2 {
public:
    MSH_M2();
    ~MSH_M2();

    void setDeviceFactories(const std::vector<IDeviceFactory*> factories);
    void setProductFamilyFactories(const std::vector<IProductFamilyFactory*> factories);

    void initializeCreatorChain();
    void initializeDeviceManager();

    IDeviceManager* getDeviceManager();

private:
    IDeviceManager* deviceManager;
    std::vector<IDeviceFactory*> deviceFactories;
    std::vector<IProductFamilyFactory*> productFamilyFactories;
};