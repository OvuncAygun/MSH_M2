#include "IDeviceCreator.h"

void IDeviceCreator::setNext(IDeviceCreator* next) {
    nextCreator = next;
}

DeviceRequest IDeviceCreator::createDevice(DeviceRequest request) {
    if (nextCreator) {
        return nextCreator->createDevice(request);
    }
    return request;
}