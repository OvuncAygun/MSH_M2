#include "LightDevice.h"
#include <iostream>

LightDevice::LightDevice(const std::string& name,
                         const std::vector<std::string>& config)
    : Device(name, config, DEVICE_LIGHT) {
}
