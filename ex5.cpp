//Ex5:-Write C++ program, to addition two 3*4 arrays:
#include <iostream>

using namespace std;

int main() {setlocale(LC_ALL, "Bulgarian");
    int a[3][4], b[3][4], c[3][4];
    int i, j;

    cout << "Въведете елементите на масив A: \n";
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            cin >> a[i][j];
    cout << "Въведете елементите на масив B: \n";
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            cin >> b[i][j];
    //Сибира елементите от А и В в С
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            c[i][j] = a[i][j] + b[i][j];

    cout << "Масив С" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++)
            cout << c[i][j] << "\t";
        cout << endl;
    }
}