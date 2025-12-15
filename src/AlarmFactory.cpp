#include "AlarmFactory.h"

IDevice* AlarmFactory::createDevice(
    const std::string& name,
    const std::vector<std::string>& config
) {
    return new AlarmDevice(name, config);
}

IDevice* AlarmFactory::cloneDevice(IDevice* source) {
    if (!source)
        return 0;

    AlarmDevice* alarm = dynamic_cast<AlarmDevice*>(source);
    if (!alarm)
        return 0;

    return new AlarmDevice(alarm->getName(), std::vector<std::string>());
}
