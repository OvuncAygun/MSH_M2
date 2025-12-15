#include "LightFactory.h"

IDevice* LightFactory::createDevice(
    const std::string& name,
    const std::vector<std::string>& config
) {
    return new LightDevice(name, config);
}

IDevice* LightFactory::cloneDevice(IDevice* source) {
    if (!source)
        return 0;

    LightDevice* light = dynamic_cast<LightDevice*>(source);
    if (!light)
        return 0;

    return new LightDevice(light->getName(), std::vector<std::string>());
}