#include <iostream>
using namespace std;

class Calculation {
    public:
    float a;
    float b;

    void addition() {
        cout << "\nSum : " << a + b << endl;
    }

    void subtraction() {
        cout << "Sutraction : " << a - b << endl;
    }

    void multiplication() {
        cout << "Multiply : " << a * b << endl;
    }

    void division() {
        cout << "Division : " << a / b << endl;
    }
};

int main() {
    cout << "Calculator :- \n" << endl;

    float x, y;
    cout << "Enter 1st Value : ";
    cin >> x;

    cout << "Enter 2nd Value : ";
    cin >> y;

    Calculation cal;
    cal.a = x;
    cal.b = y;

    cal.addition();
    cal.subtraction();
    cal.multiplication();
    cal.division();

    // return 0;
}