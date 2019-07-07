#include<iostream>
#include<string>
#include<map>
#include <unordered_map>

using namespace std;

class Solution {
	/*
		I             1
		V             5
		X             10
		L             50
		C             100
		D             500
		M             1000
		*/

public:
	int Roman_To_Int(string s) {
		int ret_num = 0, prev = 0, curr = 0;
		map<char, int> roman_numbers;
		roman_numbers['I'] = 1;
		roman_numbers['V'] = 5;
		roman_numbers['X'] = 10;
		roman_numbers['L'] = 50;
		roman_numbers['C'] = 100;
		roman_numbers['D'] = 500;
		roman_numbers['M'] = 1000;

		for (string::reverse_iterator it = s.rbegin(); it != s.rend(); ++it) {
			curr = roman_numbers[*it];
			if ( curr >= prev) {
				ret_num += curr;
			}
			else {
				ret_num -= curr;
			}
			prev = curr;


		}

		return ret_num;
	}
};

int main() {
	Solution sol1;
	int ret_num;
	ret_num = sol1.Roman_To_Int("CMXCIX");
	cout << ret_num << endl;
}