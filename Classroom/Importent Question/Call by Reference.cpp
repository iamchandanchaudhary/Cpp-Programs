#include <iostream>
using namespace std;

int increment(int &number) {
    number++;

    cout << "Number 1 : " << number << endl;
}

int main() {
    cout << "Call by Reference :- \n" << endl;

    int number = 5;

    increment(number);

    cout << "Number 2 : " << number << endl;

    return 0;

}