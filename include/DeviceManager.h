#pragma once

#include <vector>
#include <string>

#include "IDeviceManager.h"
#include "IDeviceCreator.h"
#include "DeviceRequest.h"

class DeviceManager : public IDeviceManager {
private:
    std::vector<IDevice*> devices;
    IDeviceCreator* creator;   // Chain of responsibility entry

public:
    DeviceManager();
    virtual ~DeviceManager();

    void setCreator(IDeviceCreator* creator);

    virtual void addDevice(
        DeviceType deviceType,
        const std::string& name,
        const std::vector<std::string>& config,
        int count
    );

    virtual std::vector<IDevice*> getDeviceByType(DeviceType deviceType);
    virtual IDevice* getDeviceByIndex(int index);
    virtual void removeDevice(IDevice* device);
};
