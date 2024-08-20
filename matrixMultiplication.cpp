#include<iostream>
using namespace std;

// Function to input elements into a matrix
void inputArray(int arr[][100], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << "Enter the element at " << i << "," << j << " : ";
            cin >> arr[i][j];
        }
    }
}

int main() {
    int r1, c1, r2, c2;

    // Input the dimensions of the first matrix
    cout << "Enter rows and columns of the first matrix: ";
    cin >> r1 >> c1;

    // Input the dimensions of the second matrix
    cout << "Enter rows and columns of the second matrix: ";
    cin >> r2 >> c2;

    // Check if matrix multiplication is possible
    if (c1 != r2) {
        cout << "Matrix multiplication is not possible because the number of columns in the first matrix does not equal the number of rows in the second matrix." << endl;
        return 0;
    }

    int arr1[100][100];
    int arr2[100][100];
    int arr3[100][100] = {0}; // Initialize resultant matrix to zero

    // Input elements for the first matrix
    cout << "Enter elements for the first matrix:" << endl;
    inputArray(arr1, r1, c1);

    // Input elements for the second matrix
    cout << "Enter elements for the second matrix:" << endl;
    inputArray(arr2, r2, c2);

    // Matrix multiplication logic
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Output the resultant matrix
    cout << "Resultant matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << arr3[i][j] << " "; // Print elements with spaces
        }
        cout << endl;
    }

    return 0;
}
