#include <iostream>
using namespace std;

int largestNumber() {
    int number1, number2, number3;

    cout << "Enter 1st Number : ";
    cin >> number1;

    cout << "Enter 2nd Number : ";
    cin >> number2;

    cout << "Enter 3rd Number : ";
    cin >> number3;

    cout << endl;
    
    if(number1 > number2 && number1 > number3) {
        cout << "Number 1 is Greater!" << endl;
    }

    else if(number2 > number3 && number2 > number1) {
        cout << "Number 2 is Greater!" << endl;
    }

    else {
        cout << "Number 3 is Greater!" << endl;
    }
} 

int main() {
    cout << "Find Greater of 3 Numbers :- \n" << endl; 

    largestNumber();
}