#include <iostream>
using namespace std;

int isEven() {
    int number;
    cout << "Enter Number : ";
    cin >> number;

    if(number % 2 == 0) {
        cout << "Even Number" << endl;
    } 
    else {
        cout << "Odd Number" << endl;
    }
}

int main() {
    cout << "WAF to print if a number Even or Odd :- \n" << endl;

    isEven();
}