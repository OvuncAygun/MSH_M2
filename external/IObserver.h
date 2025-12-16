#pragma once

#include "IDevice.h"

class IObserver {
public:
    virtual ~IObserver() = 0;

    virtual void update(IDevice* device) = 0;
};