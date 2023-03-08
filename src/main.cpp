#include "Command.h"

int main(int argc, char *argv[])
{
    LightControl lctl;

    lctl(1);

    SmartHomev2 smartHome;
    smartHome.lightReset(lctl)


    return 0;
}