// tests.cpp
#include "whattotest.cpp"
#include <gtest/gtest.h>

TEST(DISABLE_SquareRootTest, PositiveNos) {
    EXPECT_EQ(18.0, squareRoot(324.0));
    EXPECT_EQ(25.4, squareRoot(645.16));
    EXPECT_EQ(50.3321, squareRoot(2533.310224));
}

TEST(SquareRootTest, NegativeNos) {
    ASSERT_EQ(0.0, squareRoot(0.0));
    ASSERT_EQ(-1.0, squareRoot(-22.0));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
