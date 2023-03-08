#include <gtest/gtest.h>
#include "Command.h"

TEST(CommandFakeTest, SimpleTestPass)
{
    EXPECT_EQ(true, true);
}

TEST(CommandFakeTest, SimpleTestFails)
{
    EXPECT_EQ(true, false);
}

TEST(CommandTest, Constructor)
{
    Command command("CommandName", 0);

    EXPECT_EQ(command.getName(), "CommandName");
    EXPECT_NE(command.getId(), 1);
}

TEST(CommandTest, SettersGetters)
{
    Command command("CommandName", 0);

    command.setName("NewName");
    command.setId(5);

    EXPECT_EQ(command.getName(), "NewName");
    EXPECT_EQ(command.getId(), 5);
}