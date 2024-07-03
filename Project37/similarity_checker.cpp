#include<string>
using namespace std;

class SimilarityChecker {
public:
	SimilarityChecker(const string& ansStr)
		: ansStr(ansStr) {

	}
	int getLengthScore(const string& userStr) {
		return 60;
	}

private:
	string ansStr;
};