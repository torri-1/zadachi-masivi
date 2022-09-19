//Ex1:- Write C++ program, to read 15 numbers, 5 numbers per row, the print them
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main() {setlocale(LC_ALL, "Bulgarian");
    int arr[3][5];
    int row, col;
    cout << "Въведете 15 числа: " << endl;
    for (row = 0; row < 3; row++)
        for (col = 0; col < 5; col++)
            cin >> arr[row][col];
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 5; col++) {
            cout << arr[row][col] << "\t";
        }
        cout << endl;

//    for (row = 0; row < 3; row++) {
//        ostringstream stream;
//        for (col = 0; col < 5; ++col) {
//            if (col) stream << '\t';
//            stream << arr[row][col];
//        }
//        string string = stream.str();
//
//        cout << string << '\n';
//    }
}

