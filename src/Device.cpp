#include "Device.h"
#include <iostream>

Device::Device(const std::string& name,
               const std::vector<std::string>& config,
               DeviceType type)
    : name(name),
      config(config),
      powerState(false),
      operationState(false),
      deviceType(type) {
}

Device::~Device() {
}

void Device::powerOn() {
    powerState = true;
    std::cout << name << " powered ON\n";
}

void Device::powerOff() {
    powerState = false;
    std::cout << name << " powered OFF\n";
}

void Device::detect() {
    if (powerState) {
        operationState = true;
        std::cout << name << " detecting...\n";
    }
}

std::string Device::getName() const {
    return name;
}

DeviceType Device::getDeviceType() const {
    return deviceType;
}
