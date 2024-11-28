#include <iostream>
using namespace std;

int main() {
    cout << "Table with while loop :- \n" << endl;

    int n;
    cout << "Enter Number : ";
    cin >> n;

    int i = 1;

    // cout << "The Table of " << n << " -" << endl;
    while(i <= 10) {
        cout << n << "*" << i << " = " << n * i << endl;
        i++;
    }

    cout << "\nThank You :)" << endl;
    return 0;
}