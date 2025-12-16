#pragma once

#include "BaseProductFamilyCreator.h"

class DetectorCreator : public BaseProductFamilyCreator {
public:
    virtual DeviceRequest createDevice(DeviceRequest request);
};
