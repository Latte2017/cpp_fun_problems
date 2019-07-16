//cdc 1.5

#include<iostream>
#include<string>

using namespace std;

class Compress {
public:
	string returnCompressed(string input_str) {
		int ret_arr[256] = { 0 };
		string ret_string = "";
		for (int i = 0; i < input_str.size(); i++) {
			ret_arr[input_str[i]] += 1;
		}
		for (int iter = 0; iter < 256; iter++) {
			if (ret_arr[iter] > 0) {
				ret_string += char(iter);
				ret_string += to_string(ret_arr[iter]);
			}
		}
		if (ret_string.size() > input_str.size()) {
			return input_str;
		}
		return ret_string;

	}
};

int main() {
	string input_str = "hello#$", ret_str = "";
	Compress comp1;
	ret_str = comp1.returnCompressed(input_str);
	cout << "The compressed string is " << ret_str << endl;
}