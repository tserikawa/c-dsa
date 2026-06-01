extern "C"
{
#include "string/c_string.h"
}
#include <gtest/gtest.h>

TEST(CStringTest, Create)
{
    c_string *s = cs_new("hello");
    EXPECT_NE(s, nullptr);
    cs_free(s);
}