#include "Command.h"

Command::Command(std::string name, int id) : mName(name), mId(id)
{

}

std::string Command::getName()
{
    return mName;
}

void Command::setName(std::string name)
{
    mName = name;

    if (mName.find("substring", 0))
    ;
}

int Command::getId()
{
    return mId;
}

void Command::setId(int id)
{
    mId = id;
}