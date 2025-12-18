#include "MSH_M2.h"
#include "AlarmCreator.h"
#include "CameraCreator.h"
#include "DetectorCreator.h"
#include "LightCreator.h"
#include "MusicCreator.h"
#include "TVCreator.h"
#include "DeviceManager.h"


MSH_M2::MSH_M2() {
    
};
MSH_M2::~MSH_M2() = default;

void MSH_M2::setDeviceFactories(const std::vector<IDeviceFactory*> factories) {
    deviceFactories = factories;
}

void MSH_M2::setProductFamilyFactories(const std::vector<IProductFamilyFactory*> factories) {
    productFamilyFactories = factories;
}

void MSH_M2::initializeCreatorChain() {
    AlarmCreator* alarmCreator = new AlarmCreator();
    alarmCreator->setFactory(deviceFactories[0]);

    CameraCreator* cameraCreator = new CameraCreator();
    cameraCreator->setFactory(deviceFactories[1]);

    LightCreator* lightCreator = new LightCreator();
    lightCreator->setFactory(deviceFactories[2]);

    MusicCreator* musicCreator = new MusicCreator();
    musicCreator->setFactory(deviceFactories[3]);

    TVCreator* tvCreator = new TVCreator();
    tvCreator->setFactory(deviceFactories[4]);

    DetectorCreator* detectorCreator = new DetectorCreator();
    detectorCreator->setFactory(productFamilyFactories[0]);

    deviceCreatorChain = alarmCreator;
    alarmCreator->setNext(cameraCreator);
    cameraCreator->setNext(lightCreator);
    lightCreator->setNext(musicCreator);
    musicCreator->setNext(tvCreator);
    tvCreator->setNext(detectorCreator);
}

void MSH_M2::initializeDeviceManager() {
    deviceManager = new DeviceManager();
    static_cast<DeviceManager*>(deviceManager)->setCreator(deviceCreatorChain);
}

IDeviceManager* MSH_M2::getDeviceManager() {
    return deviceManager;
}