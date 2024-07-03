#include<string>
using namespace std;

class SimilarityChecker {
public:
	SimilarityChecker(const string& ansStr)
		: ansStr(ansStr) {

	}
	int getLengthScore(const string& userStr) {
		if (ansStr.length() == userStr.length())	return 60;
		if (ansStr.length() >= userStr.length() * 2
			|| ansStr.length() * 2 <= userStr.length())	return 0;
		return 0;
	}

private:
	string ansStr;
};