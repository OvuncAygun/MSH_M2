#include "DetectorFactory.h"

IDevice* DetectorFactory::createDevice(
    const std::string& name,
    const std::vector<std::string>& config
) {
    return new DetectorDevice(name, config);
}

IDevice* DetectorFactory::cloneDevice(IDevice* source) {
    if (!source)
        return 0;

    DetectorDevice* detector = dynamic_cast<DetectorDevice*>(source);
    if (!detector)
        return 0;

    return new DetectorDevice(detector->getName(), std::vector<std::string>());
}
