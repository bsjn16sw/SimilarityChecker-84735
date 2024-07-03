#include "pch.h"
#include "../Project37/similarity_checker.cpp"

TEST(TestCaseName, TestName1) {
	SimilarityChecker sc{ "ABCDE" };
	int ret = sc.getLengthScore("ABCDE");
	EXPECT_EQ(ret, 60);
}

TEST(TestCaseName, TestName2) {
	SimilarityChecker sc{ "ABCDE" };
	int ret = sc.getLengthScore("AB");
	EXPECT_EQ(ret, 0);
}