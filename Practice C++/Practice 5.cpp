#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
    string name;
    int age;
};

class Student : public Person {
    public:
    string course;
    double marks;
};

class Gender : public Student {
    public:
    string gender;

    Gender() {
        cout << "Student Info : " << endl;
    }

    void getInfo() {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Course : " << course << endl;
        cout << "Marks : " << marks << endl;
        cout << "Gender : " << gender << "\n" << endl;
    }
};

int main() {
    cout << "Oops (Multilevel Inheritance) :- \n" << endl;

    Gender s1;
    s1.name = "Chandan Chaudhary";
    s1.age = 18;
    s1.course = "BCA";
    s1.marks = 98.8;
    s1.gender = "Male";

    s1.getInfo();

    return 0;
}