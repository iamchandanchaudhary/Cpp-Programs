#include <iostream>
using namespace std;

int factorial() {
    int n;
    cout << "Enter number : ";
    cin >> n;

    int fact = 1;

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << "Factorial of " << n << " : " << fact << endl;
}

int main() {
    cout << "WAF to print the Factorial of a Number(n) :- \n" << endl;

    factorial();
}