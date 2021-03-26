#include<gtest/gtest.h>


TEST(HelloTest, BaseAssertions) {
	EXPECT_STRNE("Hello", "World");
	EXPECT_EQ(4*7, 28);
}
