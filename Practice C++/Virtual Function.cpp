#include <iostream>
using namespace std;

class Base {
    public:

    virtual void showValue() {
        cout << "Base Class!" << endl;
    }
};

class Derived : public Base {
    public:
    
    void showValue() {
        cout << "Derived Class!" << endl;
    }
};

int main() {
    cout << "Virtual Function :- \n" << endl;

    Base *ptr;

    Derived aa;
    ptr = &aa;

    ptr->showValue();
}