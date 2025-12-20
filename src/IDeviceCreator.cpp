#include "IDeviceCreator.h"

void IDeviceCreator::setNext(IDeviceCreator* next) {
    nextCreator = next;
}