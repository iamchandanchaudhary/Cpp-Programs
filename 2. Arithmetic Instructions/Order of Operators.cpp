#include <iostream>

int main() {
    std::cout << "Order of Operators :- " << std::endl;

    /* Precedence */
    // ()
    // *, /
    // +, - 

    int a = 21;
    double value1 = 12 + 3 * 5;
    std::cout << "\nValue 1 : " << value1 << std::endl;

    double value2 = (12 + 3) * 5;
    std::cout << "Value 2 : " << value2 << std::endl;

    double value3 = 12 + 3 - 5;
    std::cout << "Value 3 : " << value3 << std::endl;

    double value4 = 12 / 3 * 5;
    std::cout << "Value 4 : " << value4 << std::endl;

    double value5 = 12 - 3 + 5;
    std::cout << "Value 5 : " << value5 << std::endl;

    double value6 = 12 - (3 + 5);
    std::cout << "Value 6 : " << value6 << std::endl;
}