#pragma once

#include "IDeviceManager.h"

class MSH_M2 {
public:
    MSH_M2();
    ~MSH_M2();

    IDeviceManager* getIDeviceManager();

private:
    IDeviceManager* deviceManager;
};