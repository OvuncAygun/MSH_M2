#include "CameraFactory.h"

IDevice* CameraFactory::createDevice(
    const std::string& name,
    const std::vector<std::string>& config
) {
    return new CameraDevice(name, config);
}

IDevice* CameraFactory::cloneDevice(IDevice* source) {
    if (!source)
        return 0;

    CameraDevice* camera = dynamic_cast<CameraDevice*>(source);
    if (!camera)
        return 0;

    return new CameraDevice(camera->getName(), std::vector<std::string>());
}
