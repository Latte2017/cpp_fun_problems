#include<string>
#include<unordered_set>

using namespace std;

class Solution {
public:
	int numJewelsInStones(string J, string S) {
		int ret_val = 0;
		unordered_set<char> jewels;
		for (int i = 0; i < J.size(); i++) {
			jewels.insert(J[i]);
		}
		for (int i = 0; i < S.size(); i++) {
			if (jewels.find(S[i]) != jewels.end()) {
				++ret_val;
			}
		}
		return ret_val;
	}
};