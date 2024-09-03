#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
    string name;
    int age;
    string course;

    void getInfo() {
        cout << "1st Function :- " << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << "\n" << endl; 
    }

    void getInfo(string name) {
        cout << "2nd Function :- " << endl;
        cout << "Name : " << name << "\n" << endl;
    }

    void getInfo(int age) {
        cout << "3rd Function :- " << endl;
        cout << "Age : " << age << "\n" << endl;
    }

    void getInfo(string name, int age) {
        cout << "4th Function :- " << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << "\n" << endl; 
    }
};

int main() {
    cout << "Function Overloading (Polimorphism) :- \n" << endl;

    Student s1;
    s1.name = "Chandan Chaudhary";
    s1.age = 18;
    s1.course = "BCA";

    s1.getInfo();

    Student s2;
    s2.getInfo("Chandan Chaudhary");

    Student s3;
    s3.getInfo(18);

    Student s4;
    s4.getInfo("Chandu", 18);
}