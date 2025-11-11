#include <iostream>
using namespace std;

int isPrime(int number) {

    bool isPrime = true;

    for(int i = 2; i <= number-1; i++) {
        if(number % i == 0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime == true) {
        cout << "Prime Number!" << endl;
    } 
    else {
        cout << "Not a Prime Number!" << endl; 
    }

    return isPrime;
}

int main() {
    cout << "WAF to print if a Number is Prime or Not :- \n" << endl;

    int number;
    cout << "Enter Number : ";
    cin >> number;

    isPrime(number);
}