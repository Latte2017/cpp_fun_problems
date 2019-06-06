#include<iostream>
#include<vector>
#include<map>
#include <algorithm>


using namespace std;

class Solution {
public:
	vector<string> commonChars(vector<string>& A) {
		if (A.empty()) {
			return {};
		}
		int count[26] = { 0 };
		for (char ch : A[0]) {
			count[ch - 'a']++;
		}
		for (int i = 1; i < A.size(); i++) {
			int c[26] = { 0 };
			for (auto ch : A[i]) {
				c[ch - 'a']++;
			}
			for (int i = 0; i < 26; i++) {
				count[i] = min(count[i], c[i]);
			}
		}
		vector<string> ret;
		for (int i = 0; i < 26; i++) {
			while (count[i]-- > 0) {
				char ch = static_cast<char>('a' + i);
				ret.push_back(string(1, ch));
			}
		}
		return ret;
	}
};

int main() {
	Solution mysol;
	vector<string> arr{ "kk", "kkaa", "xakkab" };
	vector<string> ret_vt = mysol.commonChars(arr);
	for (int i = 0; i < ret_vt.size(); i++) {
		cout << ret_vt[i] << endl;
	}
}
