#include "BaseDeviceCreator.h"

BaseDeviceCreator::BaseDeviceCreator()
    : nextCreator(0), deviceFactory(0) {
}

BaseDeviceCreator::~BaseDeviceCreator() {
}

void BaseDeviceCreator::setNext(IDeviceCreator* next) {
    nextCreator = next;
}

void BaseDeviceCreator::setFactory(IDeviceFactory* factory) {
    deviceFactory = factory;
}

DeviceRequest BaseDeviceCreator::createDevice(DeviceRequest request) {
    // If this creator cannot handle the request,
    // pass it to the next creator in the chain
    if (nextCreator) {
        return nextCreator->createDevice(request);
    }

    // End of chain: return request unchanged
    return request;
}
