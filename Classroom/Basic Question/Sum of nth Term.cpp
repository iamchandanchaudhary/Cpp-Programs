#include <iostream>
using namespace std;

int main() {

    int number;
    cout << "Enter number : ";
    cin >> number;

    int sum = 0;

    for(int i = 1; i <= number; i++) {
        sum = sum + i;
    }

    cout << "\nSum of nth Term : " << sum << endl;
}