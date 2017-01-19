#include "../src/factorialcomputer.h"

#include <gtest/gtest.h>

TEST(FactorialTest, BasicTest) {
    EXPECT_EQ(120, FactorialComputer().compute(5));
}

TEST(FactorialTest, TestZero) {
    EXPECT_EQ(1, FactorialComputer().compute(0));
}

TEST(FactorialTest, TestNegative) {
    EXPECT_EQ(0, FactorialComputer().compute(-1));
}
