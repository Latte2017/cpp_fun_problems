#include <vector>
#include<iostream>

using namespace std;

class Solution {
private:
	vector<vector<int>> l1;
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		int sum = 0;
		
		vector<int> la;
		vector<bool> visited_status;
		visited_status.insert(visited_status.end(), nums.size(), false);
		for (int i = 0; i < sizeof(nums); i++) {
			for (int j = i + 1; j < nums.size(); j++) {
				for (int k = j + 1; k < nums.size(); k++) {
					if (nums[i] + nums[j] + nums[k] == 0
						and (visited_status[i] == false and visited_status[j] == false and
							visited_status[k] == false)) {
						la.push_back(nums[i]);
						la.push_back(nums[j]);
						la.push_back(nums[k]);
						l1.push_back(la);
						visited_status[i] = true;
						visited_status[j] = true;
						visited_status[k] = true;
						la = {};
					}
				}
			}

		}
		return l1;

	}

	/*
	Solution operator cout {
		vector<int>read_list = {};
		for (int j = 0; j < l1.size(); j++) {
			read_list = l1[j];
			for (auto i = read_list.begin(); i != read_list.end(); ++i) {
				std::cout << *i << endl;
			}
		}
		return;
	}
	*/
};

int main() {
	vector<int> input = { -1, 0, 1, 2, -1, -4 };
	Solution sol;
	sol.threeSum(input);
	//sol.cout << sol.threeSum(input) << endl;
}