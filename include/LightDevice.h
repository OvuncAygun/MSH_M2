#pragma once

#include "Device.h"

class LightDevice : public Device {
public:
    LightDevice(const std::string& name,
                const std::vector<std::string>& config);
};
