#include "DetectorDevice.h"

DetectorDevice::DetectorDevice(const std::string& name,
                               const std::vector<std::string>& config)
    : Device(name, config, DEVICE_DETECTOR) {
}