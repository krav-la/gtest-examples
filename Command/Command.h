#if !defined(COMMAND_H)
#define COMMAND_H
#include <string>

class Command {
public:
    Command(std::string name, int id);
    std::string getName();
    void setName(std::string name);
    int getId();
    void setId(int id);
private:
    std::string mName;
    int mId;
};

#endif
