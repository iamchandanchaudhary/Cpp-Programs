#include <iostream>
using namespace std;

int main() {
    cout << "Working with Number :- \n" << endl;

    // Different type of Number system
    int decimalNumber = 255;
    int binaryNumber = 0b11111111;
    int hexNumber = 0xff;

    cout << "Decimal Number : " << decimalNumber << endl;
    cout << "Binary Number : " << binaryNumber << endl;
    cout << "Hexa Decimal Number : " << hexNumber << endl;

    // The Unsigned keyword does not store (-)negative values
    unsigned int number1 = -255;
    unsigned int number2 = 0;
    number2--;

    cout << "\nUnsigned Keyword : " << number1 << endl;
    cout << "Unsigned Keyword : " << number2 << endl;

}