#pragma once

#include "Device.h"

class AlarmDevice : public Device {
public:
    AlarmDevice(const std::string& name,
                const std::vector<std::string>& config);
};
