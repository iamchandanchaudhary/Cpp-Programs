#include <iostream>
using namespace std;

// 1st Function
int sum(int a, int b) {
    
    cout << "1st Sum : " << (a + b) << endl;
    // return a + b;
}

// 2nd Function
double sum(double a, double b) {
    
    cout << "2nd Sum : " << (a + b) << endl;
    // return a + b;
}

// 3rd Function
int sum(int a, int b, int c) {
    
    cout << "3rd Sum : " << (a + b + c) << endl;
    // return a + b + c;
}

int main() {
    cout << "Function Overloading :- \n" << endl;

    sum(5, 10);
    sum(5.5, 3.5);
    sum(4, 5, 3);
    
    cout << "\nThank You :)" << endl;
}