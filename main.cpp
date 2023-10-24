#include <iostream>

using namespace std;

int main() {
	int n;
	
	cout << "Vedit chuslo: ";
	cin >> n;

	const int rows = 3;
	const int cols = n;

	int array[rows][cols];

	int value = n;
	for(int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			array[i][j] = value;
			value++;
		}

	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << array[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}