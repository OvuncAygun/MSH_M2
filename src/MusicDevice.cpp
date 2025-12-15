#include "MusicDevice.h"

MusicDevice::MusicDevice(const std::string& name,
                         const std::vector<std::string>& config)
    : Device(name, config, DEVICE_MUSIC) {
}
