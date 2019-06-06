#include<iostream>
#include<map>
#include<vector>

using namespace std;

class TwoSum {
public:
	vector<int> FindSum(vector<int>& nums, int target) {
		map<int, int> temp_map;
		vector<int> return_vt;

		for (int i = 0; i < nums.size(); i++) {
			int num1 = nums[i];
			int num2 = target - nums[i];
			if (temp_map.find(num1) == temp_map.end() and temp_map.find(num2) == temp_map.end()) {
				temp_map[num1] = i;
			}
			else if(temp_map.find(num1) != temp_map.end()) {
				continue;
			}
			else {
				if (temp_map[num2] > i) {
					return_vt.push_back(i);
					return_vt.push_back(temp_map[num2]);
				}
				else {
					return_vt.push_back(temp_map[num2]);
					return_vt.push_back(i);
				}
				return return_vt;
			}
		}
	}
};


int main() {
	vector<int> input_arr{ 230, 863, 916, 585, 981, 404, 316, 785, 88, 12, 70, 435, 384, 778, 887, 755, 740, 337, 86, 92, 325, 422, 815, 650, 920, 125, 277, 336, 221, 847, 168, 23, 677, 61, 400, 136, 874, 363, 394, 199, 863, 997, 794, 587, 124, 321, 212, 957, 764, 173, 314, 422, 927, 783, 930, 282, 306, 506, 44, 926, 691, 568, 68, 730, 933, 737, 531, 180, 414, 751, 28, 546, 60, 371, 493, 370, 527, 387, 43, 541, 13, 457, 328, 227, 652, 365, 430, 803, 59, 858, 538, 427, 583, 368, 375, 173, 809, 896, 370, 789 };
	vector<int> output_vt;
	int sum = 542;
	TwoSum* mysum{};
	output_vt = mysum->FindSum(input_arr, sum);
	cout << "First elemetn is " << output_vt[0] << "Second element is " << output_vt[1] << endl;
}
