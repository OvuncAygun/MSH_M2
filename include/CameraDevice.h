#pragma once

#include "Device.h"

class CameraDevice : public Device {
public:
    CameraDevice(const std::string& name,
                 const std::vector<std::string>& config);
};
