#include<string>
using namespace std;

class SimilarityChecker {
public:
	SimilarityChecker(const string& ansStr)
		: ansStr(ansStr) {

	}
	int getLengthScore(const string& userStr) {
		int ansLen = ansStr.length();
		int userLen = userStr.length();

		if (ansLen == userLen)	return 60;
		if ((ansLen >= userLen * 2) || (ansLen * 2 <= userLen))	return 0;
		return 0;
	}

private:
	string ansStr;
};