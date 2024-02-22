# C++ Matrix Determinant Calculator

This C++ project calculates the determinant of a 3x3 matrix. It prompts the user to enter the elements of the matrix, displays the entered matrix, and then calculates the determinant using the rule of Sarrus.

## Matrix Determinant Calculation

The determinant of a 3x3 matrix is calculated using the rule of Sarrus, which involves multiplying certain elements of the matrix and summing them up in a specific pattern.

### Steps:

1. Create a 3x3 matrix and prompt the user to input each element.
2. Display the entered matrix.
3. Calculate the determinant using the rule of Sarrus.

## Usage

The `main` function contains the code for the matrix determinant calculation. When executed, the program prompts the user to input the elements of the matrix, displays the entered matrix, and then calculates and prints the determinant.

### Example Usage:

```cpp
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    int count = 1;

    // Input - all elements
    cout << "Enter elements of 3x3 matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Enter element " << count << ": ";
            cin >> matrix[i][j];
            count++;
        }
    }

    cout << endl;

    // Output - Your 3x3 array
    cout << "The 3x3 matrix entered is:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Calculate and print the determinant
    int detValue = 0;
    for (int i = 0; i < 3; i++) {
        detValue += matrix[0][i] * (matrix[1][(i + 1) % 3] * matrix[2][(i + 2) % 3] - matrix[1][(i + 2) % 3] * matrix[2][(i + 1) % 3]);
    }

    // Output - Determinant
    cout << "Determinant: " << detValue << endl;

    return 0;
}
