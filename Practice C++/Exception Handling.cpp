#include <iostream>
using namespace std;

int main() {
    cout << "Exception Handling :- \n" << endl;

    float a, b, value;

    cout << "Enter 1st Value : ";
    cin >> a;

    cout << "Enter 2nd Value : ";
    cin >> b;

    try {
        if(b != 0) {
            value = a / b;
            cout << "Division : " << value << endl;
        }
        else {
            throw(b);
        }
    } 
    catch(float b) {
        cout << "Division with 0 is not Possible!" << endl;
    }

    return 0;
}