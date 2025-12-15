#include "TVDevice.h"

TVDevice::TVDevice(const std::string& name,
                   const std::vector<std::string>& config)
    : Device(name, config, DEVICE_TV) {
}
