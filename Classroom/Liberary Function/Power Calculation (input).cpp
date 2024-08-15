#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Power Calculation :- \n" << endl;

    double value;
    double power;

    cout << "Enter value : ";
    cin >> value;

    cout << "Enter Power : ";
    cin >> power;

    double result = pow(value, power);

    cout << "\nResult : " << result << endl;
}