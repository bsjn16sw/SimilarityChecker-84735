#include<string>
using namespace std;

class SimilarityChecker {
public:
	SimilarityChecker(const string& ansStr)
		: ansStr(ansStr) {

	}
	int getLengthScore(const string& userStr) {
		if (ansStr.length() == userStr.length())	return 60;
		return 0;
	}

private:
	string ansStr;
};