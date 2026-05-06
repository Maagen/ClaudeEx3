#include <gtest/gtest.h>
#include "example_lib.h"

TEST(ExampleLibTest, Add) {
    ExampleLib lib;
    EXPECT_EQ(lib.add(3, 4), 7);
    EXPECT_EQ(lib.add(-1, 1), 0);
    EXPECT_EQ(lib.add(0, 0), 0);
}

TEST(ExampleLibTest1, Add) {
    ExampleLib lib;
    EXPECT_EQ(lib.add(3, 4), 7);
    EXPECT_EQ(lib.add(-1, 1), 0);
    EXPECT_EQ(lib.add(0, 0), 0);
}

TEST(ExampleLibTest2, Subtract) {
    ExampleLib lib;
    EXPECT_EQ(lib.subtract(10, 3), 7);
    EXPECT_EQ(lib.subtract(0, 5), -5);
    EXPECT_EQ(lib.subtract(5, 5), 0);
}
