#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
    string name;
    int age;

    Student() {
        cout << "This is Non-parametrised Constructor" << endl;
    }

    Student(string name, int age) {
        cout << "This is Parametrised Constructor" << endl;
    }
};

int main() {
    cout << "Constructor Overloading in Polymorphism :- \n" << endl;

    Student s1; // it will call Non-parametrised Constructor

    Student s2("Chandan Chaudhary", 18);// it will call Parametrised Constructor

    return 0;
}