//Ex6:-Write C++ program, to convert 2D-array into 1D-array:
#include <iostream>

using namespace std;

int main() {setlocale(LC_ALL, "Bulgarian");
    int a[3][4];
    int b[12];

    cout << "Въведете 12 числа: " << endl;
    int row, col, k = 0;
    for (row = 0; row < 3; row++)
        for (col = 0; col < 4; col++)
            cin >> a[row][col];

    //Елементите от двумерния масив се копират в едномерния
    for (row = 0; row < 3; row++)
        for (col = 0; col < 4; col++) {
            b[k] = a[row][col];
            k++;
        }
    for (int i = 0; i < k; i++)
        cout << b[i] << " ";
}