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
        cout <<  endl;
    }

    cout << endl;


    // Define the determinant

    // int detValue = 0;

    // for (int i = 0; i < 3; ++i) {
    //     int LeftToRight_value = 1;
    //     int RightToLeft_value = 1;

    //     for (int j = 0; j < 3; ++j) {
    //         LeftToRight_value *= matrix[j][(i + j) % 3];
    //         RightToLeft_value *= matrix[2 - j][(i + j) % 3];
    //     }

    //     detValue += LeftToRight_value - RightToLeft_value;

    // }

    int detValue = 0;

    for (int i = 0; i < 3; i++) {
        detValue += matrix[0][i] * (matrix[1][(i + 1) % 3] * matrix[2][(i + 2) % 3] - matrix[1][(i + 2) % 3] * matrix[2][(i + 1) % 3]);
    }

    // Output - Determinant

    cout << "Determinant: " << detValue << endl;

    return 0;
}
