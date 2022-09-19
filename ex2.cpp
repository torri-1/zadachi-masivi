/*Ex2:- Write C++ program, to read 4*4 2D-array, then find the summation
        of the array elements, finally print these elements*/
#include<iostream>

using namespace std;

int main() {setlocale(LC_ALL, "Bulgarian");
    int a[4][4];
    int i, j, sum = 0;

    cout << "Въведете 16 числа: " << endl;

    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++) {
            cin >> a[i][j];
            sum += a[i][j];
        }

    cout << "Сумата е: " << sum << endl;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
}