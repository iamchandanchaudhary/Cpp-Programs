#include <iostream>
using namespace std;

int main() {
    cout << "Finding Leap Year :- \n" << endl;

    int year;
    cout << "Enter Year : ";
    cin >> year;

    if(year%4 == 0 || year%100 == 0) {
        cout << "Leap Year" << endl;
    }
    else {
        cout << "Normal Year" << endl;
    }
}