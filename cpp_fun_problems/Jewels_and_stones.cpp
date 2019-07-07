#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
	int numJewelsInStones(string J, string S) {
		int array_map[57] = { 0 };
		int ret_val = 0;
		if (J.empty())
			return 0;
		for (auto ele : J) {
			array_map[int(int(ele) - 'A')]++;
		}
		for (auto ele : S) {
			if (array_map[int(ele - 'A')]>0) {
				ret_val++;
			}
		}
		return ret_val;
	}
};

int main() {
	Solution Sol1;
	string J = "A", S = "aaAAJ";
	int ret_val;
	ret_val = Sol1.numJewelsInStones(J, S);

	cout << "Ret Val is " << ret_val << endl;
}