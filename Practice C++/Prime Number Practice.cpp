#include <iostream>
using namespace std;

int main() {
    cout << "Check Prime or Not :- \n" << endl;

    int number;
    cout << "Enter Number : ";
    cin >> number;

    bool isPrime = true;

    for(int i = 2; i <= number-1; i++) {
        if(number % i == 0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime == true) {
        cout << "Number is Prime" << endl;
    } else {
        cout << "Number is Not Prime" << endl;
    }
}