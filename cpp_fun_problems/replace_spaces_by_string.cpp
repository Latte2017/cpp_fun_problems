//CDC 1.4

//Replace a space by another char "%20"
#include<iostream>
#include<string>
#include<vector>

using namespace std;


class replaceChar {
public:
	string replacea(string input) {
		int len = input.size() - 1;
		int flag = 0;
		for (len; len >= 0; len--) {
			if (input.at(len) == ' ' and flag == 0) {
				input.erase(len,len+1);
			}
			else if (input.at(len) != ' ') {
				flag = 1;
			}
			else {
				input.insert(len,"%20");
				input.erase((len + 3),1);
			}
		}
		return input;
	}

	void replacea(char* input, int len) {
		int flag = 0, it = 0, iter = 0;
		len = len - 1;
		int *pos = new int[len+1];
		for (it = len; it >= 0; it--) {
			if (input[it] == ' ') {
				pos[it] = 1;
			}
			else
				pos[it] = 0;
		}

		for (int it = 0; it <len; it++) {
			if (pos[it] == 1) {
				memmove(input + it + 3, input + it+1, strlen(input) + 1);
				
				input[it+ iter] = '%';
				input[it + 1 + iter] = '2';
				input[it + 2+iter] = '0';
				iter += 2;
			}

		}
		delete[] pos;
		pos = NULL;
		
	}
		
};


int main() {
	string s1 = "This is a    ", s2;
	char s3[14] = { 't', 'h', 'i', 's', ' ', 'i', 's', ' ', 'a', ' ', ' ', ' ', ' ','/n'};
	replaceChar rep1;
	s2 = rep1.replacea(s1);
	rep1.replacea(s3, 9);
	cout << "Returned string is " << s2 << " and its length is " << s2.size() << endl;
	cout << "Returned string is " << s3 << endl;
}