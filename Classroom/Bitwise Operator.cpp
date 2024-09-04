#include <iostream>
using namespace std;

int main() {
    cout << "Bitwise Operator :- \n" << endl;

    int a = 5;  // Binary: 0101
    int b = 3;  // Binary: 0011

    // Bitwise AND
    int andResult = a & b;
    cout << "a & b = " << andResult << endl;

    // Bitwise OR
    int orResult = a | b;
    cout << "a | b = " << orResult << endl;

    // Bitwise XOR
    int xorResult = a ^ b;
    cout << "a ^ b = " << xorResult << endl;

    // Bitwise NOT
    int notResult = ~a;
    cout << "~a = " << notResult << endl;

    // Bitwise Left Shift
    int leftShiftResult = a << 1;
    cout << "a << 1 = " << leftShiftResult << endl;

    // Bitwise Right Shift
    int rightShiftResult = a >> 1; 
    cout << "a >> 1 = " << rightShiftResult << endl;

    return 0;
}
