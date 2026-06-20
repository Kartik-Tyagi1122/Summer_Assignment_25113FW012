// progra for finding column wise sum
#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows and columns : ";
    cin >> rows >> cols;

    int A[50][50];

    cout << "Enter matrix elements :" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Column-wise Sum :" << endl;

    for(int j = 0; j < cols; j++) {
        int sum = 0;

        for(int i = 0; i < rows; i++) {
            sum = sum + A[i][j];
        }

        cout << "Sum of Column " << j + 1 << " = " << sum << endl;
    }

    return 0;
}