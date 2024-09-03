#include <iostream>
#include <string>
using namespace std;

class Parent {
    public:
    string name;
    int age;

    virtual void getInfo() {
        cout << "1st Function :- " << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << "\n" << endl;
    }

    void getInfo() {
        cout << "2nd Function :- " << endl;
    }
};

// class Child : public Parent {
//     public:

//     void getInfo() {
//         cout << "Child Class" << endl;
//         cout << "Name : " << name << endl;
//         cout << "Age : " << age << "\n" << endl;
//     }
// };

int main() {
    cout << "Virtual Function(Polymorphism Oops) :- \n" << endl;

    Parent p1;
    p1.name = "Chandan";
    p1.age = 18;
    p1.getInfo();

    // Child c1;
    // c1.name = "Chandu";
    // c1.age = 19;
    // c1.getInfo();

    return 0;
}