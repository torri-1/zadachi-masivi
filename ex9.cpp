/*Ex9:- Write C++ program, to read 3*3 2D-array, then find the summation of the
        main diagonal and its secondary diagonal of the array elements, finally print
        these elements:*/
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Bulgarian");
    cout << "Програмата намира сбора на диагоналите." << endl;
    int a[3][3];
    int row, col, x = 0, y = 0;
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            cout << "Въведете a[" << row << "][" << col << "] ";
            cin >> a[row][col];
            if (row == col)
                x = x + a[row][col];
            if (row + col == 2)
                y = y + a[row][col];
        }
    }
    cout << "Сумата на главния диагонал е: " << x << endl;
    cout << "Сумата на втория диагинал е: " << y << endl;
}