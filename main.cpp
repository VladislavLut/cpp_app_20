#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "Vedit chuslo: ";
	cin >> n;

	const int rows = 1;
	const int col = 10;

	int array[rows][col];

	for (int j = 0; j < col; j++) {
		if (j == 0) {
			array[0][j] = n;
		}
		else {
			array[0][j] = array[0][j - 1] * 2;
		}

	}

	cout << "Otrumania masuv: " << endl;
	for (int j = 0; j < col; j++) {
		cout << array[0][j] << " ";
	}
	cout << endl;

	return 0;
}