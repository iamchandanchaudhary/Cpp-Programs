#include <iostream>
using namespace std;

int productFun(int a, int b) {
    int multiply = a * b;

    return multiply;;
}

int main() {
    cout << "WAF to Find the Product of two Numbers :- \n" << endl;

    int a, b;
    cout << "Enter 1st Value : ";
    cin >> a;

    cout << "Enter 2nd Value : ";
    cin >> b;

    int multiply = productFun(a, b);
    cout << "\nTheir Product : " << multiply << endl;
}