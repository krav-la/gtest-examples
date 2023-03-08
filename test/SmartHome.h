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
    void switchLight(bool enabled) override {};
    void turnOnDimming(bool enabled) override{};
    operator () (int num) {
        std::cout << num;
    }
};



class SmartHomev1
{
private:
    LightControl mLightControl;
public:
    void lightReset()
    {
        mLightControl.switchLight(false);
        mLightControl.switchLight(true);
    }
};

class SmartHomev2
{
public:
    void lightReset(BaseLightControl &lctl)
    {
        lctl.switchLight(false);
        lctl.switchLight(true);
    }
};

#endif // SMART_HOME_H
