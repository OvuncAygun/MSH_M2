#include "LightCreator.h"

DeviceRequest LightCreator::createDevice(DeviceRequest request) {
    if (request.deviceCreationType == DEVICE_LIGHT && deviceFactory) {
        IDevice* device;
        if (request.count > 0) {
            device = deviceFactory->createDevice(
                request.name,
                request.config
            );
            request.deviceVector.push_back(device);
        }

        for (int i = 1; i < request.count; ++i) {
            device = deviceFactory->cloneDevice(device);
            request.deviceVector.push_back(device);
        }
        return request;
    }
    return IDeviceCreator::createDevice(request);
}