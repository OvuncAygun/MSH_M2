#include "CameraDevice.h"

CameraDevice::CameraDevice(const std::string& name,
                           const std::vector<std::string>& config)
    : Device(name, config, DEVICE_CAMERA) {
}
