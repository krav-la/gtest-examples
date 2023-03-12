#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "LightControlMock.h"
#include "SmartHome.h"

using ::testing::InSequence;

TEST(SmartHomeTest, LightReset)
{
    LightControlMock lctlMocked;
    SmartHome smartHome;

    EXPECT_CALL(lctlMocked, switchLight(true))
        .Times(4);
        .WillOnce(1)
        .WillOnce(3)
        .WillRepeatedly(Return(5))
    EXPECT_CALL(lctlMocked, switchLight(false))
        .Times(1);

    smartHome.lightReset(lctlMocked);
}

