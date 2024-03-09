#include <gtest/gtest.h>
// #include <units/length.h>


class EnsampleTest : public testing::Test
{
protected:
    int bogus = 42;
}

TEST_F(EnsampleTest, IntegersOfTheSameValueAreEqual)
{
    int a = 7;
    int b = 7;
    
    EXPECT_EQ(a, b);
}

// TEST_F(EnsampleTest, UnitConversionShouldWork)
// {
//     units::length::inch_t a = 7_in;
//     units::length::meter_t b = 3_m;
    
//     EXPECT_EQ(a, b);
// }
