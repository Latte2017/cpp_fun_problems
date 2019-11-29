#include<iostream>
#include<vector>

using namespace std;

class product_of_all_numbers_except_itself  {
public:
	vector<int> product(vector<int> input) {
		int arr_size = input.size();
		unsigned int *left_product = new unsigned int[arr_size];
		unsigned int* right_product = new unsigned int[arr_size];
		vector<int> ret_vect;
		for (int i = 0; i < input.size(); i++) {
			left_product[i] = 1;
			right_product[i] = 1;
		}
		for (int i = 1; i < input.size(); i++) {
			left_product[i] = left_product[i - 1] * input[i - 1];
			right_product[input.size() - i - 1] = right_product[input.size() - i] * input[input.size() - i];
		}
		for (int i = 0; i < input.size(); i++) {
			ret_vect.push_back(left_product[i] * right_product[i]);
		}
		return ret_vect;

	}
};


int main(){
	vector<int> input{ 1,2,3,4 };
	vector<int> ret_vect;
	product_of_all_numbers_except_itself p1;
	ret_vect = p1.product(input);
	for (int i = 0; i < ret_vect.size(); i++) {
		cout << ret_vect[i] << endl;
	}

}