#include "CameraCreator.h"

DeviceRequest CameraCreator::createDevice(DeviceRequest request) {
    if (request.deviceCreationType == DEVICE_CAMERA && deviceFactory) {
        IDevice* device;
        if (request.count > 1) {
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
    
    return nextCreator->createDevice(request);
}