/*Ex3:- Write C++ program, to read 3*4 2D-array, then find the summation
        of each row*/
#include<iostream>

using namespace std;

int main() {setlocale(LC_ALL, "Bulgarian");
    int a[3][4];
    int i, j, sum = 0;

    cout << "Въведете 12 числа: ";

    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            cin >> a[i][j];
    for (i = 0; i < 3; i++) {
        sum = 0;
        for (j = 0; j < 4; j++)
            sum += a[i][j];
        cout << "сумата на ред " << i+1 << " е: " << sum << endl;
    }
}
