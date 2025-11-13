#include <iostream>
using namespace std;

int main() {
    cout << "Pointers :- \n" << endl;

    int a = 10;

    int *ptr = &a;

    cout << "Address of a : " << &a << endl;
    cout << "Address of a : " << ptr << endl;

    cout << "Address of ptr : " << &ptr << endl;

    cout << "\nValue of a : " << a << endl;
    cout << "Value of a : " << *ptr << endl;
}