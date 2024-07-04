#include "pch.h"
#include "../Project37/similarity_checker.cpp"

class SimilarityCheckerFixture : public testing::Test {
public:
	void calcLengthScore(const string& userStr, int expected) {
		double ret = sc.getLengthScore(userStr);
		EXPECT_DOUBLE_EQ(round(ret), round(expected));
	}
private:
	SimilarityChecker sc{ "ABCDE" };
};

TEST_F(SimilarityCheckerFixture, LenSame) {
	calcLengthScore("ABCDE", 60);
}

TEST_F(SimilarityCheckerFixture, LenTwiceThan) {
	calcLengthScore("AB", 0);
}

TEST_F(SimilarityCheckerFixture, LenSubscore) {
	calcLengthScore("ABC", 20);
	calcLengthScore("ABCD", 45);
}