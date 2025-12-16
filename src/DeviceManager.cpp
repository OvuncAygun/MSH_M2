#include "DeviceManager.h"

DeviceManager::DeviceManager()
    : creator(0) {
}

DeviceManager::~DeviceManager() {
    // Clean owned devices
    for (std::vector<IDevice*>::iterator it = devices.begin();
         it != devices.end(); ++it) {
        delete *it;
    }
    devices.clear();
}

void DeviceManager::setCreator(IDeviceCreator* creator) {
    this->creator = creator;
}

void DeviceManager::addDevice(
    DeviceCreationType deviceCreationType,
    const std::string& name,
    const std::vector<std::string>& config,
    int count
) {
    if (!creator || count <= 0)
        return;

    DeviceRequest request;
    request.deviceCreationType = deviceCreationType;
    request.name = name;
    request.config = config;
    request.count = count;

    // Delegate creation to chain
    request = creator->createDevice(request);

    // Store created devices
    for (std::vector<IDevice*>::iterator it = request.deviceVector.begin();
         it != request.deviceVector.end(); ++it) {
        devices.push_back(*it);
    }
}

std::vector<IDevice*> DeviceManager::getDeviceByType(DeviceType deviceType) {
    std::vector<IDevice*> result;

    for (std::vector<IDevice*>::iterator it = devices.begin();
         it != devices.end(); ++it) {
        if ((*it)->getDeviceType() == deviceType) {
            result.push_back(*it);
        }
    }
    return result;
}

IDevice* DeviceManager::getDeviceByIndex(int index) {
    if (index < 0 || index >= (int)devices.size())
        return 0;
    return devices[index];
}

void DeviceManager::removeDevice(IDevice* device) {
    for (std::vector<IDevice*>::iterator it = devices.begin();
         it != devices.end(); ++it) {
        if (*it == device) {
            delete *it;
            devices.erase(it);
            return;
        }
    }
}
