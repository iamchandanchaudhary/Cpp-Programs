#include <iostream>

int main() {
    std::cout << "Swap Value \n\n";

    int a = 32;
    int b = -12;

    std::cout << "Their Values : \n";
    std::cout << "a is : " << a;
    std::cout << "\nb is : " << b;

    // Swaping these values
    int temp = a;
    a = b;
    b = temp;

    std::cout << "\n\nAfter Swap : \n";
    std::cout << "a is : " << a;
    std::cout << "\nb is : " << b;
}