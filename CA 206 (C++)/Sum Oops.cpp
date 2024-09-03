#include <iostream>
using namespace std;

class Sum {
    public:
    int a;
    int b;
    int c;
    int sum, subtraction, multiply;

    void getInfo() {
        cout << "Enter 1st Value : ";
        cin >> a;

        cout << "Enter 2nd Value : ";
        cin >> b;

        cout << "Enter 3rd Value : ";
        cin >> c;

        sum = a + b + c;
        subtraction = a - b - c;
        multiply = a * b * c;

        cout << "\nSum : " << sum << endl;
        cout << "Subtraction : " << subtraction << endl;
        cout << "Multiply : " << multiply << "\n" <<  endl;
    }
};

int main() {
    cout << "Print Sum (Oops) :- \n" << endl;

    Sum s1;
    // s1.a;
    // s1.b;
    // s1.c;

    // s1.sum = s1.a + s1.b;
    s1.getInfo();
}