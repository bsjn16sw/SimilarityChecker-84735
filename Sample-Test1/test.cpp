#include "pch.h"
#include "../Project37/similarity_checker.cpp"

TEST(LengthScoreTest, LenSame) {
	SimilarityChecker sc{ "ABCDE" };
	double ret = sc.getLengthScore("ABCDE");
	EXPECT_DOUBLE_EQ(ret, 60);
}

TEST(LengthScoreTest, LenTwiceThan) {
	SimilarityChecker sc{ "ABCDE" };
	double ret = sc.getLengthScore("AB");
	EXPECT_DOUBLE_EQ(ret, 0);
}

TEST(LengthScoreTest, LenSubscore) {
	SimilarityChecker sc{ "ABCDE" };
	double ret = sc.getLengthScore("ABC");
	EXPECT_DOUBLE_EQ(ret, 20);

	ret = sc.getLengthScore("ABCD");
	EXPECT_DOUBLE_EQ(ret, 45);
}