#include "MusicFactory.h"

IDevice* MusicFactory::createDevice(
    const std::string& name,
    const std::vector<std::string>& config
) {
    return new MusicDevice(name, config);
}

IDevice* MusicFactory::cloneDevice(IDevice* source) {
    if (!source)
        return 0;

    MusicDevice* music = dynamic_cast<MusicDevice*>(source);
    if (!music)
        return 0;

    return new MusicDevice(music->getName(), std::vector<std::string>());
}
