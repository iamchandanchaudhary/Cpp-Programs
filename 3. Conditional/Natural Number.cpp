#include <iostream>
using namespace std;

int main() {
    cout << "Natural Number :- \n" << endl;

    int number;
    cout << "Enter Number : ";
    cin >> number;

    if(number > 0) {
        cout << "This is a Natural Number" << endl;
    }
    else {
        cout << "This is not a Natural Number" << endl;
    }
}