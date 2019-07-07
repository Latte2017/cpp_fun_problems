#include<string>
#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
	string removeOuterParentheses(string S) {
		string ret_str = "";
		int temp_var = 0;
		int str_size = S.length();
		int *str_pos = new int[S.length()];
		for (int index = 0; index < S.length(); index++){
			if (temp_var == 0) {
				str_pos[index] = 1;
			}
			if (S[index] == '(')
				++temp_var;
			else
				--temp_var;
			if (temp_var == 0) {
				str_pos[index] = 1;
			}
		}
	for (int iter = 0; iter < S.size(); iter++) {
		if (str_pos[iter] != 1) {
			ret_str += S[iter];
		}
	}

	return ret_str;
	}
};


int main() {
	string input_str = "((()))()";
	Solution sol1;
	string ret_str = sol1.removeOuterParentheses(input_str);
	cout << "return str is " << ret_str;
}