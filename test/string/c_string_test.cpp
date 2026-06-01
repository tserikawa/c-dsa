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

TEST(CStringTest, Length)
{
    c_string *s = cs_new("hello");
    EXPECT_EQ(5, cs_length(s));
    cs_free(s);
}