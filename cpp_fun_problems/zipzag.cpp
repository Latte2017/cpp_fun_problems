#include<iostream>
#include<string>
#include <vector>

using namespace std;

class ZigZag {
public:
	string Return_ZigZag(string input_str, int num_rows) {
		vector<string> tmp_arr(num_rows);
		int j = 0;
		string direction = "acending";
		string ret_str;
		if (input_str.size() == 0 || num_rows == 1) {
			return input_str;
		}
		for (int i = 0; i < input_str.size(); i++) {
			tmp_arr[j] += input_str[i];
			if (j >= 0 && j < num_rows - 1 && direction == "acending") {
				j++;
			}
			else {
				j--;
				direction = "decending";
			}
			if (j == 0) {
				direction = "acending";
			}
		}
		for (int i = 0; i < num_rows; i++) {
			ret_str += tmp_arr[i];
		}
		return ret_str;
	}
};

int main() {
	ZigZag myZigZag;
	string input_str = "PAYPALISHIRING";
	int num_lines = 3;
	string ret_str = myZigZag.Return_ZigZag(input_str, num_lines);
	cout << "Returned ret_str is " << ret_str << endl;
}