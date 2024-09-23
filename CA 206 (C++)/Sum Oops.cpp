#include <iostream>
using namespace std;

class Math {
    public:
    int a;
    int b;
    int c;
    int addition, subtraction, multiply;

    void getResult() {
        cout << "Enter 1st Value : ";
        cin >> a;

        cout << "Enter 2nd Value : ";
        cin >> b;

        cout << "Enter 3rd Value : ";
        cin >> c;

        addition = a + b + c;
        subtraction = a - b - c;
        multiply = a * b * c;

        cout << "\nAddition : " << addition << endl;
        cout << "Subtraction : " << subtraction << endl;
        cout << "Multiply : " << multiply << "\n" <<  endl;
    }
};

int main() {
    cout << "Arithematic Operation (Oops) :- \n" << endl;

    Math s1;
    // s1.a;
    // s1.b;
    // s1.c;

    // s1.sum = s1.a + s1.b;
    s1.getResult();
}