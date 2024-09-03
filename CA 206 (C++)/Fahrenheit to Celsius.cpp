#include <iostream>
using namespace std;

int main() {
    cout << "Convert Fahenheit to Celsius :- \n" << endl;

    double farenheit;
    cout << "Enter Temperature in (f) : ";
    cin >> farenheit;

    double celsius = (farenheit - 32) * 5/9;

    cout << "In Celsius : " << celsius << endl; 
}