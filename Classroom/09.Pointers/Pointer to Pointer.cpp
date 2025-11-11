#include <iostream>
using namespace std;

int main() {
    cout << "Pointers :- \n" << endl;

    int a = 10;
    int *ptr = &a;
    int **parPtr = &ptr;

    // cout << "Address of a : " << &a << endl;
    cout << "Address : " << &ptr << endl;
    cout << "Address : " << parPtr << endl;
}