//check symmetric matrix
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of square matrix : ";
    cin >> n;

    int A[50][50];

    cout << "Enter matrix elements :" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    bool symmetric = true;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(A[i][j] != A[j][i]) {
                symmetric = false;
                break;
            }
        }
    }

    if(symmetric)
        cout << "Matrix is Symmetric" << endl;
    else
        cout << "Matrix is Not Symmetric" << endl;

    return 0;
}