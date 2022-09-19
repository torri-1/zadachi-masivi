/*Ex7:- Write C++ program, to replace each element in the main
        diameter (diagonal) with zero?*/
#include <iostream>

using namespace std;

int main() {setlocale(LC_ALL, "Bulgarian");
    int a[3][3];
    int i, j;
    cout << "Въведете масив: " << endl;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            cin >> a[i][j];
            if (i == j)
                a[i][j] = 0;
        }


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
