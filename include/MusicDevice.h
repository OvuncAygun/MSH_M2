#pragma once

#include "Device.h"

class MusicDevice : public Device {
public:
    MusicDevice(const std::string& name,
                const std::vector<std::string>& config);
};
