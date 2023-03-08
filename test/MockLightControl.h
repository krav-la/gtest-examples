#if !defined(MOCK_LIGHT_CONTROL)
#define MOCK_LIGHT_CONTROL

#include "gmock/gmock.h"
#include "SmartHome.h"

class MockLightControl : public BaseLightControl
{
    MOCK_METHOD(void, switchLight, (bool enabled), override);
    MOCK_METHOD(void, turnOnDimming, (bool enabled), override);
}

#endif // MOCK_LIGHT_CONTROL