#include<string>
using namespace std;

class SimilarityChecker {
public:
	SimilarityChecker(const string& ansStr)
		: ansStr(ansStr) {

	}
	double getLengthScore(const string& userStr) {
		double longLen = ansStr.length() >= userStr.length() ?
			ansStr.length() : userStr.length();
		double shortLen = ansStr.length() >= userStr.length() ?
			userStr.length() : ansStr.length();

		if (longLen == shortLen)		return 60;
		if (longLen >= shortLen * 2)	return 0;
		return (1 - (longLen - shortLen) / shortLen) * 60;
	}

private:
	string ansStr;
};