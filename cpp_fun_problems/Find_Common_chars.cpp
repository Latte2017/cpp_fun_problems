#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
	vector<string> commonChars(vector<string>& A) {
		int tmp_arr[27]{ 0 };
		vector<string> ret_vt;
		for (int i = 0; i < A.size(); i++) {
			
			string tmp = A[i];
			for (int j = 0; j < tmp.length(); j++) {
				char x = tmp[j];
				int k = (int)x;
				tmp_arr[k - 97] += 1;
			}
		}
		for (int j = 0; j < 26; j++) {
			if (tmp_arr[j] == A.size()) {
				string j_tmp = "";
				j_tmp += char(j + 97);
				ret_vt.push_back(j_tmp);
			}
		}
		return ret_vt;
	}
};

int main() {
	Solution mysol;
	vector<string> arr{ "abc", "bca", "cab" };
	vector<string> ret_vt = mysol.commonChars(arr);
	for (int i = 0; i < ret_vt.size(); i++) {
		cout << ret_vt[i] << endl;
	}
}
