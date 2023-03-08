#include <gtest/gtest.h>
#include "SmartHome.h"
#include "MockLightControl.h"

TEST(SmartHomeTest, ResetLight)
{
    MockLightControl ligthControl;
    SmartHomev2 smartHome;
    smartHome.lightReset(ligthControl)
}