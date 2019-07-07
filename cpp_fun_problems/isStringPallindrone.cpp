#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

class Solution {
public:
	bool isPallindrome(string input_string) {
		int input_len = input_string.length();
		if (input_string.empty()) {
			return false;
		}

		for (int itr = 0; itr < input_len; itr++) {
			if (input_string[itr] != input_string[input_len-itr-1]) {
				return false;
			}
		}
		return true;
	}
};


/*
abc, aa, acbebca, aabbfww, qwerxd
*/

int main() {
	Solution sol1;
	bool ret_val;
	vector<string> vt {"abc", "aa", "acbebca", "aabbfww", "qwerxd"};
	for (auto test_str : vt) {
		ret_val = sol1.isPallindrome(test_str);
		cout << "return value for " << test_str << " is " << ret_val << endl;
	}
}