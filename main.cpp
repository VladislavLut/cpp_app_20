#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    
    std::srand(std::time(0));

    
    int firstArray[5][10];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            firstArray[i][j] = std::rand() % 51;  
        }
    }

    
    int secondArray[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            secondArray[i][j] = firstArray[i][2 * j] + firstArray[i][2 * j + 1];
        }
    }

    
    std::cout << "Pershiy masuv (5x10):" << std::endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            std::cout << firstArray[i][j] << " ";
        }
        std::cout << std::endl;
    }

    
    std::cout << "Drygiy masuv (5x5):" << std::endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << secondArray[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
