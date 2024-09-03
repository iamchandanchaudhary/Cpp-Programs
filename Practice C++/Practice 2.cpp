#include <iostream>
using namespace std;

int increment1(int number) {
    number++;

    cout << "Number 1 : " << number << endl;
}
int increment(int &number) {
    number++;

    cout << "Number 2 : " << number << endl;
}


int main() {
    cout << "Call by Reference :- \n" << endl;

    int number = 5;
    increment1(number);
    cout << "Number 3 : " << number << endl;

    increment(number);

    cout << "Number 4 : " << number << endl;

    return 0;

}