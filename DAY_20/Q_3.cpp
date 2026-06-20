//find row wise sum
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

    cout << "Row-wise Sum :" << endl;

    for(int i = 0; i < rows; i++) {
        int sum = 0;

        for(int j = 0; j < cols; j++) {
            sum = sum + A[i][j];
        }

        cout << "Sum of Row " << i + 1 << " = " << sum << endl;
    }

    return 0;
}