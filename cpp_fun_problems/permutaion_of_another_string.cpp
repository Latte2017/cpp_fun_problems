//cdc 1.3

//Is a string permutation of another
//If char are ASCII we can do it in array

#include<iostream>
#include<string>
#include<map>
#include<vector>

using namespace std;

class permute {
public:
	bool isPermutationOfAnother(string input1, string input2) {
		map<char, int> mapped_string;
		for (auto ch : input1) {
			++mapped_string[ch];
		}
		for (auto ch : input2) {
			--mapped_string[ch];
		}
		for (auto perm : mapped_string) {
			if (perm.second != 0) {
				return false;
			}
		}
		return true;
	}
};

int main() {
	vector<string> s1 = { "hello", "olleh", "AQSED", "ASAS", " ", "", "!@", "" };
	permute p1;
	unsigned int i;
	
	for (i = 0; i < s1.size(); (i += 2)) {
		bool ret_val = p1.isPermutationOfAnother(s1[i], s1[i + 1]);
		cout << "ret_val is " << ret_val << endl;
	}

}