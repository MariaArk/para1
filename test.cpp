#include "pch.h"
#include "../StaticLib1/framework.h"

TEST(TestCaseName, TestName1) {
  EXPECT_EQ(IsPrime(1), false);
  EXPECT_TRUE(true);
}
TEST(TestCaseName, TestName2) {
	EXPECT_EQ(IsPrime(-1), false);
	EXPECT_TRUE(true);
}
TEST(TestCaseName, TestName3) {
	EXPECT_EQ(IsPrime(2), true);
	EXPECT_TRUE(true);
}
TEST(TestCaseName, TestName4) {
	EXPECT_EQ(IsPrime(3), true);
	EXPECT_TRUE(true);
}
TEST(TestCaseName, TestName5) {
	EXPECT_EQ(IsPrime(11), true);
	EXPECT_TRUE(true);
}
TEST(TestCaseName, TestName6) {
	EXPECT_EQ(IsPrime(15), false);
	EXPECT_TRUE(true);
}