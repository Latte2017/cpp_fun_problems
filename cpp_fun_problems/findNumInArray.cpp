#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int begin = 0, end = nums.size()-1;
		if (target < nums[begin]) {
			return 0;
		}
		else if (target > nums[end]) {
			return nums.size();
		}
		for (begin; begin < end; ++begin) {
			if (target > nums[(begin + end) / 2]) {
				begin = (begin + end) / 2;
			}
			else if (target < nums[(begin + end) / 2]) {
				end = (begin + end) / 2;
			}
			else
				return (begin + end) / 2;
			if (begin == end) {
				break;
			}

		}
		if (target > nums[begin] and target < nums[end])
			return end;
		else
			return begin;
	}
};

int main() {
	Solution sol1;
	int ret_val;
	vector<int> vt = {1, 3, 5};
	ret_val = sol1.searchInsert(vt, 4);
	cout << "ret_val is " << ret_val << endl;
}