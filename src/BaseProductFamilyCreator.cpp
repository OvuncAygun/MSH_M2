#include "BaseProductFamilyCreator.h"

BaseProductFamilyCreator::BaseProductFamilyCreator()
    : nextCreator(0), productFamilyFactory(0), index(0) {
}

BaseProductFamilyCreator::~BaseProductFamilyCreator() {
}

void BaseProductFamilyCreator::setNext(IDeviceCreator* next) {
    nextCreator = next;
}

void BaseProductFamilyCreator::setFactory(IProductFamilyFactory* factory) {
    productFamilyFactory = factory;
}

DeviceRequest BaseProductFamilyCreator::createDevice(DeviceRequest request) {
    // If this creator cannot handle the request,
    // pass it to the next creator in the chain
    if (nextCreator) {
        return nextCreator->createDevice(request);
    }

    // End of chain: return request unchanged
    return request;
}
