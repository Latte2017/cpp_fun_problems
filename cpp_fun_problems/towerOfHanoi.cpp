#include<iostream>
#include<string>

using namespace std;

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
	if (n == 1) {
		cout << "Moved from " << from_rod << "To " << to_rod << endl;
		return;
	}
	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
	cout << "Moved from " << from_rod << "to rod " << to_rod << endl;
	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
	int n = 4;
	towerOfHanoi(n, 'A', 'C', 'B');
}