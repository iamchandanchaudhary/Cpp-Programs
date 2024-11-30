#include <iostream>
using namespace std;

class Base {
    public:
    int a;
    int b;

    static int x;

    void setValue(int a, int b) {
        this->a = a;
        this->b = b;

        x = x + 1;
    }

    void getValue() {
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
        cout << "x : " << x << "\n" << endl;
    }
};

int Base::x;

int main() {
    cout << "Static Data Member :- \n" << endl;

    Base obj1;

    obj1.setValue(10, 20);
    obj1.getValue();

    Base obj2;

    obj2.setValue(10, 20);
    obj2.getValue();

    return 0;
}