#include "SmartHome.h"
#include <iostream>

void LightControl::switchLight(bool enable)
{
    std::cout << "Switch light: " << enable << std::endl;
}

void LightControl::turnOnDimming(bool enable)
{
    std::cout << "Dimming: " << enable << std::endl;
}

void SmartHome::lightReset(BaseLightControl &lctl)
{
    lctl.switchLight(false);
    lctl.switchLight(true);
}