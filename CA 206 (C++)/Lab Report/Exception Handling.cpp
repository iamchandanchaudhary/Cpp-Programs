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
            cout << "\nDivision Value : " << value << endl;
        }
        else {
            throw(b);
        }
    }

    catch(float b) {
        cout << "\nDivision with " << b << " is not Possible.\n";
    }

    return 0;
}