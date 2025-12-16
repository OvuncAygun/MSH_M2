#include "DetectorCreator.h"

DeviceRequest DetectorCreator::createDevice(DeviceRequest request) {
    if (request.deviceCreationType == DEVICE_DETECTOR && productFamilyFactory) {
        std::vector<IDevice*> devices;
        if (request.count > 0) {
            std::vector<IDevice*> devices = productFamilyFactory->createDevices(
                std::vector<std::string>{request.name, request.name},
                std::vector<std::vector<std::string>>{request.config, request.config}
            );
            request.deviceVector.push_back(devices[0]);
            request.deviceVector.push_back(devices[1]);
        }

        for (int i = 1; i < request.count; ++i) {
            std::vector<IDevice*> devices = productFamilyFactory->cloneDevices(devices);
            request.deviceVector.push_back(devices[0]);
            request.deviceVector.push_back(devices[1]);
        }
        return request;
    }
    return IDeviceCreator::createDevice(request);
}