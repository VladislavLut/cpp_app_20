#include <iostream>


using namespace std;

int main() {
    const int rows = 3;
    const int columns = 3;


    int array[rows][columns] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sum += array[i][j];
        }
    }


    float mean = (float)sum / (rows * columns);


    int min_element = array[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (array[i][j] < min_element) {
                min_element = array[i][j];
            }
        }
    }


    int max_element = array[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (array[i][j] > max_element) {
                max_element = array[i][j];
            }
        }
    }


    cout << "Summa vsix elementiv masuvy: " << sum << endl;
    cout << "Seredne arefmetchne vsix elementiv masuvy: " << mean << endl;
    cout << "Minimalnuy element masuvy: " << min_element << endl;
    cout << "Maksumalnuy element masuvy: " << max_element << endl;

    return 0;
}
