/*Ex4:- Write C++ program, to read 3*4 2D-array, then replace each value
        equal 5 with 0*/
#include <iostream>

using namespace std;

int main() {setlocale(LC_ALL, "Bulgarian");
    int a[3][4];
    int i, j;
    cout << "Въведете 12 числа: " << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            cin >> a[i][j];
            if (a[i][j] == 5) a[i][j] = 0;
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
}
