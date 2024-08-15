#include <iostream>

int main() {
    std::cout << "Mathematical Expression :- \n\n";

    float a = 15;
    float b = 10;

    std::cout << "a : " << a;
    std::cout << "\nb : " << b;

    float sum = a + b;
    std::cout << "\n\nSum : " << sum;

    float subtraction = a - b;
    std::cout << "\nSubtraction : " << subtraction;

    float multiply = a * b;
    std::cout << "\nMultiply : " << multiply;

    float division = a / b;
    std::cout << "\nDivision : " << division;

    int remainder = (int)a % (int)b;
    std::cout << "\nRemainder : " << remainder;
}