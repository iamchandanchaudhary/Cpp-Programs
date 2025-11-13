#include <iostream>
#include <string>
using namespace std;

class Parent {
    public:
    string name;
    int age;

    void getInfo() {
        cout << "Parent Class" << endl;
    }
};

class Child : public Parent {
    public:

    void getInfo() {
        cout << "Child Class" << endl;
    }
};

int main() {
    cout << "Function Overriding in Polymorphism Oops :- \n" << endl;

    Parent p1;
    p1.getInfo();

    Child c1;
    c1.getInfo();

    return 0;
}