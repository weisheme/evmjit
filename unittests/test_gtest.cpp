#include <gtest/gtest.h>

TEST(GtestTest, assert1) {
    int a = 1;
    int b = 2;
    ASSERT_NE(a, b);
}
