#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Calculate Area of Circle :- \n" << endl;

    double radius;
    cout << "Enter Radius : ";
    cin >> radius;

    const double pi = 3.14;

    // Calculating --> Area of Circle
    double areaOfC = pi * pow(radius, 2);

    cout << "\nArea of a Circle : " << areaOfC << endl;
}