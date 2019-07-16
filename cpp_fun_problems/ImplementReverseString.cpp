//CDC 1.2
//Implement a revserse for null terminated string

#include<iostream>
#include<string>

using namespace std;

class reverseString {
public:
	void returnReversedString(char* ch1) {
		char* begin, * end;
		begin = ch1;
		end = ch1;
		while (*end ) {
			++end;
		}
		--end;
		while (begin != end) {
			char tmp = *begin;
			*begin = *end;
			*end = tmp;
			++begin;
			--end;
		}
	}
};

int main() {
	
	char ch1[6] = { 'a','c','b','d','e','\0' };
	reverseString rev1;
	rev1.returnReversedString(ch1);
	cout << "Returned char is " << ch1 << endl;
	return 0;
}

