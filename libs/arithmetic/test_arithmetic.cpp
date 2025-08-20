#include <gtest/gtest.h>
#include <arithmetic.hpp>

TEST(arithmetic, add)
{
    EXPECT_EQ(arithmetic::add(1, 2), 3);
}

TEST(arithmetic, sub)
{
    EXPECT_EQ(arithmetic::sub(3, 2), 1);
}

TEST(arithmetic, mul)
{
    EXPECT_EQ(arithmetic::mul(2, 3), 6);
}

TEST(arithmetic, div)
{
    EXPECT_EQ(arithmetic::div(6, 3), 2);
}
