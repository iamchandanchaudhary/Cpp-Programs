#include <iostream>

int main() {
    std::cout << "Increment & Decrement :- \n";

    int a = 10;
    int b = 20;

    std::cout << "\nNormal Number(a) : " << a;

    // increment
    a++;
    std::cout << "\nAfter increment(a) : " << a;

    // decrement
    a--;

    // post-increment
    int c = a++;
    std::cout << "\n\nPost-increment(c) : " << c; // a = 11 & c 10
    std::cout << "\nPost-increment(a) : " << a;

    // pre-increment
    int d = ++b;
    std::cout << "\n\nPre-increment(d) : " << d; // a = 11 & c 11
    std::cout << "\nPre-increment(b) : " << b;
}