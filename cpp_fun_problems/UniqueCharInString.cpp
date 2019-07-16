//CDC 1.1

//Check if a string has all unique chars
#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

class uniq {
public:
	bool returnUniqueCharOrNot(string s) {
		char prev = s[0];
		sort(s.begin(), s.end());
		if (s.size() == 0)
			return false;
		for (int i = 1; i < s.size(); i++) {
			if (prev == s[i]) {
				return false;
			}
			prev = s[i];
		}
		return true;
	}
};


int main() {
	string s = "Helo";
	bool ret_val;
	uniq uq1;
	ret_val = uq1.returnUniqueCharOrNot(s);
	cout << "ret_val is " << ret_val << endl;
}