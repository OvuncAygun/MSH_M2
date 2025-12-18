#include "IDeviceCreator.h"

IDevice::~IDevice() = default;

void IDeviceCreator::setNext(IDeviceCreator* next) {
    nextCreator = next;
}