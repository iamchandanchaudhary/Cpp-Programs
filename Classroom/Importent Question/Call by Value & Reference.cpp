#include <iostream>
using namespace std;

// Call by Value
int increment1(int number) {
    number++;

    cout << "Number 1 : " << number << endl;
}

// Ca;; by Reference
int increment(int &number) {
    number++;

    cout << "Number 2 : " << number << endl;
}

int main() {
    cout << "Call by Value & Reference :- \n" << endl;

    int number = 5;
    increment1(number);
    cout << "Number 3 : " << number << endl;

    increment(number);

    cout << "Number 4 : " << number << endl;

    return 0;

}