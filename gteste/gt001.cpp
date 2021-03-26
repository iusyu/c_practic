/**
 *
 * gt001.cpp
 *
 *
 *
 *   Date: 2021.03.26 6:09 pm
 * Author: iusk
 */
#include"gtest/gtest.h"



int factor(int);



int factor(int a) {
	return a*a;
}


TEST(factorTest, positiveNumberInput) {
	EXPECT_EQ(factor(1), 1);
	EXPECT_EQ(factor(2), 4);
	EXPECT_EQ(factor(3), 9);
	EXPECT_EQ(factor(0), 0);
}

TEST(factorTest, negtive) {
	EXPECT_EQ(factor(-1),1);
	EXPECT_EQ(factor(-2), 4);
}

