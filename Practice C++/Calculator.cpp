#include <iostream>
using namespace std;

class Calculation {
    public:
    float a;
    float b;

    int addition(int a, int b) {

        return a + b;
        // cout << "\nSum : " << a + b << endl;
    }

    void subtraction(int a, int b) {
        cout << "Sutraction : " << a - b << endl;
    }

    void multiplication(int a, int b) {
        cout << "Multiply : " << a * b << endl;
    }

    void division(int a, int b) {
        cout << "Division : " << a / b << endl;
    }
};

int main() {
    cout << "Calculator :- \n" << endl;

    // float a, b;
    // cout << "Enter 1st Value : ";
    // cin >> a;

    // cout << "Enter 2nd Value : ";
    // cin >> b;

    Calculation cal;
    // cal.a = 15;
    // cal.b = 10;

    int add = cal.addition(10, 15);
    cout << "Sum : " << add << endl;
    // cal.subtraction();
    // cal.multiplication();
    // cal.division();

    // return 0;
}