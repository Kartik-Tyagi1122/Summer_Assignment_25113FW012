//program for transpose of a matrix
#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter rows: ";
    cin >> rows;

    cout << "Enter columns: ";
    cin >> cols;

    int matrix[50][50];

    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Transpose of matrix:" << endl;

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
