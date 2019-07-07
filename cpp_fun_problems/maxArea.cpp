#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int maxArea(vector<int>& height) {
		int tmp_area =0, max_area = 0;
		int i = 0;
		int j = height.size() - 1;
		while (i < j) {
			tmp_area = min(height[i], height[j]) * (j-i);
			if (max_area < tmp_area)
				max_area = tmp_area;
			if (height[i] < height[j])
				i++;
			else
				j--;
		}
		return max_area;
	}
};

int main() {
	Solution sol1;
	vector<int> arr1 { 1,8,6,2,5,4,8,3,7 };
	int max_area = -1;
	max_area = sol1.maxArea(arr1);
	cout << "max_area is " << max_area;
}