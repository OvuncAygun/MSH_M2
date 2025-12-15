#pragma once

#include "Device.h"

class TVDevice : public Device {
public:
    TVDevice(const std::string& name,
             const std::vector<std::string>& config);
};
