#include <iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
	int myAtoi(string str) {
		long long ret_num = 0;
		bool num_flag = false, neg_flag = false, start_flag = false;
		for (int i = 0; i < str.size(); i++) {
			if (isspace(str[i])) {
				continue;
			}
			else if (str[i] == '-' and num_flag == false and start_flag == false) {
				neg_flag = true;
				start_flag = true;
			}
			else if (str[i] == '+') {
				start_flag = true;
				continue;
			}
			else if ((str[i] == '-' or str[i] == '+') and (start_flag == true)) {
				return 0;
			}
			else if (!isdigit(str[i]) && num_flag == false) {
				return 0;
			}
			else if (!isdigit(str[i]) && num_flag == true) {
				break;
			}
			else if (isdigit(str[i])) {
				if (num_flag == false) {
					ret_num = abs(str[i] - '0');
					num_flag = true;
				}
				else {
					if (ret_num > INT_MAX)
						break;
					ret_num = ret_num * 10 + abs(str[i] - '0');
				}
			}
		}
		if (neg_flag)
			ret_num = ret_num * -1;
		if (ret_num < INT_MIN)
			return INT_MIN;
		else if (ret_num > INT_MAX)
			return INT_MAX;
		else
			return ret_num;

	}
};


int main() {
	Solution mysol;
	vector<string> mystring{"-91283472332" , "91283472332",  "+-1"}; //"   -42", "3.14", "+", " ", 
	for (int i = 0; i < mystring.size(); i++) {
		int ret_val = mysol.myAtoi(mystring[i]);
		cout << " mystring[i] is " << mystring[i] << "and int val is " << ret_val << endl;
	}
}