//Problem number 223
#include<iostream>
#include<tuple>

using namespace std;

class Solution {
public:
	int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
		tuple<int, int> dim[8];
		dim[0] = { A,B };
		dim[1] = { C,B };
		dim[2] = { C,D };
		dim[3] = { A,D };
		dim[4] = { E,F };
		dim[5] = { G, F };
		dim[6] = { G,H };
		dim[7] = { E, H };

		if ()
		
		cout << "Dim1 is " << get<0>(dim[2]) << endl;
		return 0;
	}
};

int main() {
	Solution mysol1;
	int ret_val = mysol1.computeArea(-3, 0, 3, 4, 0, -1, 9, 2);
	cout << "ret_val  is " << ret_val << endl;
}