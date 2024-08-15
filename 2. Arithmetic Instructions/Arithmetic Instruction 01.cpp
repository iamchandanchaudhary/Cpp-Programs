#include <iostream>

int main() {
    std::cout << "Arithmetic Instruction :- \n";

    int number1 = 10;
    int number2 = 20;
    int number3 = 30;
    int number4 = 40;
    int number5 = 50;

    number1 = number1 + 5;

    number2 = number2 - 5;

    number3 += 5;

    number4 *= 2;

    number5 /= 2;

    std::cout << "\nNumber 1 : " << number1;
    std::cout << "\nNumber 2 : " << number2;
    std::cout << "\nNumber 3 : " << number3;
    std::cout << "\nNumber 4 : " << number4;
    std::cout << "\nNumber 5 : " << number5;
}