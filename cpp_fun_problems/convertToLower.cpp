#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
	string LowerCaseString(string input_str) {
		string ret_str;
		for (size_t iter = 0; iter < input_str.size(); iter++) {
			if (input_str[iter] >= 'A' and input_str[iter] <= 'Z') {
				ret_str += input_str[iter] - 'A' + 'a';
			}
			else
			{
				ret_str += input_str[iter];
			}
			
		}
		return ret_str;
	}
};

int main() {
	vector<string> vt{ "aBC","Helo", "QWER", "awd!ASD"};
	Solution sol1;
	string output_str;
	for (auto input_str : vt) {
		output_str = sol1.LowerCaseString(input_str);
		cout << output_str << endl;
	}
}