#include "TVFactory.h"

IDevice* TVFactory::createDevice(
    const std::string& name,
    const std::vector<std::string>& config
) {
    return new TVDevice(name, config);
}

IDevice* TVFactory::cloneDevice(IDevice* source) {
    if (!source)
        return 0;

    TVDevice* tv = dynamic_cast<TVDevice*>(source);
    if (!tv)
        return 0;

    return new TVDevice(tv->getName(), std::vector<std::string>());
}
