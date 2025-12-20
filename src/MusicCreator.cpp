#include "MusicCreator.h"

DeviceRequest MusicCreator::createDevice(DeviceRequest request) {
    if (request.deviceCreationType == DEVICE_MUSIC && deviceFactory) {
        IDevice* device;
        if (request.count > 0) {
            device = deviceFactory->createDevice(
                request.name,
                request.config
            );
            device->setIndex(index++);
            request.deviceVector.push_back(device);
        }

        for (int i = 1; i < request.count; ++i) {
            device = deviceFactory->cloneDevice(device);
            device->setIndex(index++);
            request.deviceVector.push_back(device);
        }
        return request;
    }
    return IDeviceCreator::createDevice(request);
}