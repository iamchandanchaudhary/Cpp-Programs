#include <iostream>
using namespace std;

int calculateSum() {
    int a, b;

    cout << "Enter 1st Value : ";
    cin >> a;

    cout << "Enter 2nd Value : ";
    cin >> b;

    int sum = a + b;

    cout << "\nTheir Sum : " << sum << endl;
}

int main() {
    cout << "Addition with Function :- \n" << endl;

    calculateSum();
}