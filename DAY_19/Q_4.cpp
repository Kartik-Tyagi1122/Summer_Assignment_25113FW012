// diagonal sum
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of square matrix: ";
    cin >> n;

    int matrix[50][50];
    int sum = 0;

    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        sum = sum + matrix[i][i];
    }

    cout << "Sum of diagonal elements = " << sum << endl;

    return 0;
}