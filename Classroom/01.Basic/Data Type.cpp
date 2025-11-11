#include <iostream>
using namespace std;

int main() {
    cout << "Data Type :- \n" << endl;

    // Numeric Data Type
    short a = 2000;
    int b = 88965694;
    long long c = 2300102810;

    int number {};

    // Decimal Data Type
    float d = 3.14;
    double e = 43.6578;
    long double f = 6.123456;

    // Boolean Data type
    bool isValid = true;
    auto isRight = false;

    // Character data type
    char symbol = '@';


    cout << "short : " << a << endl;
    cout << "int : " << b << endl;
    cout << "long : " << c << endl;
    cout << "zero : " << number << endl;

    cout << endl;

    cout << "float : " << d << endl;
    cout << "double : " << e << endl;
    cout << "long double : " << f << endl;

    cout << endl;

    cout << "boolean : " << isValid << endl;
    cout << "boolean : " << isRight << endl;

    cout << endl;

    cout << "char : " << symbol << endl;

}