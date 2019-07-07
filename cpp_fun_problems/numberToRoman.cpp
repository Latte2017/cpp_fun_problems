#include<map>
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
	string intToRoman(int num) {
		/*
		I             1
		V             5
		X             10
		L             50
		C             100
		D             500
		M             1000
		*/
		string ret_str = "", tmp_str = "";
		int divisor = 1;
		int quotient = num, pos = 1, rem = 1;
		map<int, string> mymap1;
		mymap1[1] = "I";
		mymap1[4] = "IV";
		mymap1[5] = "V";
		mymap1[9] = "IX";
		mymap1[10] = "X";
		mymap1[40] = "XL";
		mymap1[50] = "L";
		mymap1[90] = "XC";
		mymap1[100] = "C";
		mymap1[400] = "CD";
		mymap1[500] = "D";
		mymap1[900] = "CM";
		mymap1[1000] = "M";

		if (num < 0) {
			return "";
		}

		while (num) {
			if (num >= 1000) {
				ret_str += "M";
				num -= 1000;
			}
			else if (num >= 900) {
				ret_str += "CM";
				num -= 900;
			}
			else if (num >= 500) {
				ret_str += "D";
				num -= 500;
			}
			else if (num >= 400) {
				ret_str += "CD";
				num -= 400;
			}
			else if (num >= 100) {
				ret_str += "C";
				num -= 100;
			}
			else if (num >= 90) {
				ret_str += "XC";
				num -= 90;
			}
			else if (num >= 50) {
				ret_str += "L";
				num -= 50;
			}
			else if (num >= 40) {
				ret_str += "XL";
				num -= 40;
			}
			else if (num >= 10) {
				ret_str += "X";
				num -= 10;
			}
			else if (num >= 9) {
				ret_str += "IX";
				num -= 9;
			}
			else if (num >= 5) {
				ret_str += "V";
				num -= 5;
			}
			else if (num >= 4) {
				ret_str += "IV";
				num -= 4;
			}
			else if (num >= 1) {
				ret_str += "I";
				num -= 1;
			}
		}

		return ret_str;
	}
};


int main() {
	vector<int> vt1{ 11,4,10,999,1094, 58, 19 };
	string ret_val;
	Solution sol1;
	for (int i = 0; i < vt1.size(); i++)
	{
		ret_val = sol1.intToRoman(vt1[i]);
		cout << "Int is " << vt1[i] <<  "Returned value is " << ret_val << endl;
	}
}