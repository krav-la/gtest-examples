#if !defined(LIGTH_CONTROL_MOCK_H)
#define LIGTH_CONTROL_MOCK_H

#include "gmock/gmock.h"
#include "SmartHome.h"

class LightControlMock : public BaseLightControl
{
public:
    MOCK_METHOD(void, switchLight, (bool enabled), (override));
    MOCK_METHOD(void, turnOnDimming, (bool enabled), (override));
};

#endif //LIGTH_CONTROL_MOCK_H

