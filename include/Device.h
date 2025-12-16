#pragma once

#include <string>
#include <vector>
#include "IDevice.h"

class Device : public IDevice {
protected:
    std::string name;
    std::vector<std::string> config;
    bool powerState;
    bool operationState;
    DeviceType deviceType;

public:
    Device(const std::string& name,
           const std::vector<std::string>& config,
           DeviceType type);

    virtual ~Device();

    virtual void powerOn();
    virtual void powerOff();
    virtual void detect();

    virtual std::string getName() const;
    virtual DeviceType getDeviceType() const;
};
