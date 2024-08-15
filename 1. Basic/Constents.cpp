#include <iostream>

int main() {
    std::cout << "Constent Values :- \n\n";

    // these are variables
    int number1 = 12;
    double value1 = 7.21;

    // it should be change
    number1 = 33;
    value1 = 1.11;

    // These are constent --> they never change their values
    const int number2 = 76;
    const double pi = 3.14;

    // You can't able to change their values
    // number2 = 21;
}