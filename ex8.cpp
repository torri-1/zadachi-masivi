//Ex8:- Write C++ program, print the square root of an array?
#include <iostream>
#include <cmath>

using namespace std;

int main() {setlocale(LC_ALL, "Bulgarian");
    int a[3][3];
    double b[3][3];
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            b[i][j] = sqrt(a[i][j]);
            cout << b[i][j] << "\t";
        }
        cout << endl;
    }
}