#include <iostream>
using namespace std;

int main() {
    cout << "Calculator :- \n" << endl;

    int a;
    cout << "Enter 1st Value : ";
    cin >> a;

    char op;
    cout << "Enter Operator : ";
    cin >> op;

    int b;
    cout << "Enter 2nd Value : ";
    cin >> b;

    cout << endl;
    
    if(op == '+') {
        cout << "Their Sum : " << a + b << endl;
    }
    else if(op == '-') {
        cout << "Their Subtraction : " << a - b << endl;
    }
    else if(op == '*') {
        cout << "Their Multiplication : " << a * b << endl;
    }
    else if(op == '/') {
        cout << "Their Division : " << a / b << endl;
    }
    else if(op == '%') {
        cout << "Their Reminder : " << a % b << endl;
    }
    else {
        cout << "Invalid Operator!";
    }

    cout << "\nThank You:)" << endl;
}