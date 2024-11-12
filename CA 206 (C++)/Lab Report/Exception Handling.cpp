#include <iostream> 
using namespace std;

int main() {
    cout << "Exception Handling :- \n" << endl;

    int a, b, value;

    cout << "Enter 1st Value : ";
    cin >> a;

    cout << "Enter 2nd Value : ";
    cin >> b;

    try {
        if(b != 0) {
            value = a / b;
            cout << "\nDivision Value : " << value;
        }
        else {
            throw(b);
        }
    }

    catch(int b) {
        cout << "\nDivided By : " << b;
    }

    return 0;
}