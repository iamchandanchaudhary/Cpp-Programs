#include <iostream>
using namespace std;

void swapNumber(int a, int b) {

    int temp = a;
    a = b;
    b = temp;

    cout << "\nAfter Swap : " << endl;
    cout << "A : " << a << endl;
    cout << "B : " << b << endl;
}

int main() {
    cout << "Swap Nuber :- \n" << endl;

    int a, b;
    cout << "Enter A : ";
    cin >> a;

    cout << "Enter B : ";
    cin >> b;

    cout << "A : " << a << endl;
    cout << "B : " << b << endl;

    swapNumber(a, b);
}