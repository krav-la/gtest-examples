#if !defined(SMART_HOME_H)
#define SMART_HOME_H

class BaseLightControl
{
public:
    virtual void switchLight(bool enabled) = 0;
    virtual void turnOnDimming(bool enabled) = 0;
};

class LightControl : BaseLightControl
{
public:
    void switchLight(bool enabled) override;
    void turnOnDimming(bool enabled) override;
};

class SmartHome
{
public:
    void lightReset(BaseLightControl &lctl);
};

#endif // SMART_HOME_H
