#pragma once

#include "Device.h"

class DetectorDevice : public Device {
public:
    DetectorDevice(const std::string& name,
                   const std::vector<std::string>& config);
};
