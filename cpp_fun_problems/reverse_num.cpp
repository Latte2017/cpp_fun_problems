#include<iostream>

using namespace std;

class Solution {
public:
	int reverse(int x) {
		bool flag = 0;
		int ret_num = 0;
		int rem;
		if (x < 0) {
			x *= -1;
			flag = 1;
		}
		while (x) {
			if (x > INT_MAX || x < INT_MIN) {
				return 0;
			}
			rem = x % 10;
			ret_num = ((ret_num * 10) + rem);
			x = (x-rem)/10;
		}
		
	}
};

int main() {
	Solution sol1;
	int ret_val = sol1.reverse(1534236469);
	cout << ret_val << endl;
}