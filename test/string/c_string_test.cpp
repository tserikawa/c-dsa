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

TEST(CStringTest, Cstr)
{
    c_string *s = cs_new("hello");
    const char *buffer = cs_cstr(s);
    EXPECT_STREQ("hello", cs_cstr(s));
    cs_free(s);
}

TEST(CStringTest, Clear)
{
    c_string *s = cs_new("hello");
    cs_clear(s);
    EXPECT_STREQ("", cs_cstr(s));
    EXPECT_EQ(0, cs_length(s));
    cs_free(s);
}

TEST(CStringTest, Append)
{
    c_string *s = cs_new("hello");
    cs_append(s, ",world!");
    EXPECT_EQ(12, cs_length(s));
    EXPECT_STREQ("hello,world!", cs_cstr(s));
    cs_free(s);
}