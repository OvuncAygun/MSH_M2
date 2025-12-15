#include "AlarmDevice.h"

AlarmDevice::AlarmDevice(const std::string& name,
                         const std::vector<std::string>& config)
    : Device(name, config, DEVICE_ALARM) {
}
