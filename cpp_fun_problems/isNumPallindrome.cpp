#include<iostream>
#include<stack>
#include <vector>

using namespace std;

//much easier solution would be to store the reversed number as int and compare with 
// orginal since its int vs int its constant time for comparision and one pass solution

class IsPallindrome {
public:
	int retPallindrome(int num) {
		int tmp_num = num;
		stack<int> st1;
		int digit = 0, retrieved_num=0;
		if (num < 0)
			return false;
		while (num) {
			digit = num % 10;
			num = num/10;
			st1.push(digit);
		}
		while (tmp_num) {
			digit = tmp_num % 10;
			tmp_num = tmp_num / 10;
			retrieved_num = st1.top();
			st1.pop();
			if (retrieved_num != digit) {
				return false;
			}
		}
		return true;
	}

};

int main() {
	vector<int> vt1{123, -12, 3, 3456543, 343, -0};
	IsPallindrome mypal;
	bool ret_val;
	for (int i = 0; i < vt1.size(); i++) {
		ret_val = mypal.retPallindrome(vt1[i]);
		cout << "ret_val is " << ret_val << endl;
	}
}