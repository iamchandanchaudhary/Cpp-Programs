#include <iostream>
using namespace std;

class Test {
    int a, b;
    
    public:
    Test(int x, int y) {
        a = x;
        b = y;
    }

    void getValue() {
        cout << "a : " << a << "," << "b : " << b << endl;
    }

    void operator -() {
        a = -a;
        b = -b;
    }

};

int main() {
    cout << "Unary Operator :- \n" << endl;

    Test obj(-10, 20);
    obj.getValue();

    -obj;
    obj.getValue();
}