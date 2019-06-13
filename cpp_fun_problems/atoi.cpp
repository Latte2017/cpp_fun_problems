#include <iostream>
#include<string>

using namespace std;

class Solution {
public:
	int myAtoi(string str) {
		long long ret_num = 1;
		bool num_flag = false;
		for (int i = 0; i < str.size(); i++) {
			if (isspace(str[i])) {
				continue;
			}
			else if (str[i] == '-' and num_flag == false) {
				ret_num = -1 * ret_num;
			}
			else if (str[i] == '+')
				continue;
			else if (isalpha(str[i]) && num_flag == false) {
				return 0;
			}
			else if (isalpha(str[i]) && num_flag == true) {
				break;
			}
			else if (isdigit(str[i])) {
				if (num_flag == false) {
					ret_num = ret_num * abs(str[i] - '0');
					num_flag = true;
				}
				else {
					if (ret_num < INT_MIN)
						return INT_MIN;
					else if (ret_num > INT_MAX)
						return INT_MAX;
					if (ret_num < 0)
						ret_num = ret_num * 10 - abs(str[i] - '0');
					else
						ret_num = ret_num * 10 + abs(str[i] - '0');
				}
			}
		}
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
	int ret_val = mysol.myAtoi("  -42");
	cout << ret_val;
}