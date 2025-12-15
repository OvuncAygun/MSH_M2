#pragma once

#include <string>
#include <vector>
#include "DeviceType.h"

class IDevice {
public:
    virtual ~IDevice() {}

    virtual void powerOn() = 0;
    virtual void powerOff() = 0;
    virtual void detect() = 0;

    virtual std::string getName() const = 0;
    virtual DeviceType getDeviceType() const = 0;
};
