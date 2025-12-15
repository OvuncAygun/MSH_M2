#include "CameraCreator.h"

DeviceRequest CameraCreator::createDevice(DeviceRequest request) {
    if (request.deviceType == DEVICE_CAMERA && deviceFactory) {
        for (int i = 0; i < request.count; ++i) {
            IDevice* device = deviceFactory->createDevice(
                request.name,
                request.config
            );
            if (device) {
                request.deviceVector.push_back(device);
            }
        }
        return request;
    }

    return BaseDeviceCreator::createDevice(request);
}
