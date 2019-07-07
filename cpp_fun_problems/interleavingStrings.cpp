#include<iostream>
#include <string>

using namespace std;

class Solution {
public:
	bool isInterleave(string s1, string s2, string s3) {
		int tmp_arr[26] = { 0 };
		if (s1.size() == 0 && s2 == s3) {
			return true;
		}
		else if (s2.size() == 0 && s1 == s3) {
			return true;
		}
		if (s1.size() > 0 && s3.size() == 0) {
			return false;
		}
		else if (s2.size() > 0 && s3.size() == 0) {
			return false;
		}
		else if (s1.size() == 0 && s2.size() == 0 && s3.size() == 0) {
			return true;
		}
		for (int i = 0; i < s1.size(); i++) {
			tmp_arr[int(s1[i] - 'a')]++;
		}
		for (int i = 0; i < s2.size(); i++) {
			tmp_arr[int(s2[i] - 'a')]++;
		}
		for (int i = 0; i < s3.size(); i++) {
			tmp_arr[int(s3[i] - 'a')]--;
		}
		for (int i = 0; i < 26; i++) {
			if (tmp_arr[i] > 0) {
				return false;
			}
		}
		return true;
	}
};

int main() {
	Solution mysol;
	string s1 = "abc", s2 = "cdb", s3 = "abcdbc";
	bool ret_val = mysol.isInterleave(s1, s2, s3);
	cout << ret_val << endl;
	return 0;
}
