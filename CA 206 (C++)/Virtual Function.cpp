#include <iostream>
using namespace std;

class Base {
    public:

    // Using Virtual Function
    virtual void getValue() {
        cout << "Base Class" << endl;
    }
};

class Derived : public Base {
    public:

    void getValue() {
        cout << "Derived Class" << endl;
    }
};

int main() {
    cout << "Virtual Function :- \n" << endl;

    Base *ptr;
    Derived aa;

    ptr = &aa;

    ptr->getValue();

    return 0;
}