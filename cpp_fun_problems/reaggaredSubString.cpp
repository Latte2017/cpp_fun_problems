//cdc 1.8

/* s1 = waterbottle
s2 = erbottlewa
Find if s2 is a rotation of s1
*/

#include<string>
#include<iostream>

using namespace std;

class isRotation {
public:
	bool isRotated(string s1, string s2) {
		string temp = s1 + s1;
		return temp.find(s2);
	}
};

int main() {
	isRotation rot1;
	string s1 = "waterbottle";
	string s2 = "erbottlewat";
	cout << "The result is " << rot1.isRotated(s1, s2) << endl;
}