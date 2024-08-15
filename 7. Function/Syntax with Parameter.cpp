#include <iostream>
using namespace std;

int addFunction(int a, int b) { // a,b are parameter
    int sum = a + b;

    return sum;
}

int subtractionFun(int a, int b = 1) { // a,b are parameter
    int subtraction = a - b;

    return subtraction;
}

int main() {
    cout << "Syntax with Parameter :- \n" << endl;

    int addition = addFunction(15, 20); // a,b are Argument

    cout << "Their Sum : " << addition << endl;

    int diff = subtractionFun(5); // a,b are Argument

    cout << "Their Subtraction : " << diff << endl;
}