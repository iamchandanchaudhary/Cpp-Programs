#include <iostream>
#include <string>
using namespace std;

class Student {
    public:

    // Constructor
    Student() {
        cout << "Student Data :- " << endl;
        course = "BCA";
    }

    // Deconstructor
    ~Student() {
        cout << "Deconstructor" << endl;
    }

    string name;
    string course;
    int age;
    double marks;
    int roll_no;

    void getStuInfo() {
        cout << "Name : " << name << endl;
        cout << "Course : " << course << endl;
        cout << "Age : " << age << endl;
        cout << "Marks : " << marks << endl;
        cout << "Roll no. : " << roll_no << "\n" << endl;
    }
};

int main() {
    cout << "Constructor & Deconstructor in Oops :- \n" << endl;

    // 1st Student
    Student s1;
    s1.name = "Chandan Chaudhary";
    s1.age = 18;
    s1.marks = 98.4;
    s1.roll_no = 230010;

    s1.getStuInfo();


    // 2nd Student
    Student s2;
    s2.name = "Nikhil Chaudhary";
    s2.age = 19;
    s2.marks = 95.4;
    s2.roll_no = 230011;

    s2.getStuInfo();

    return 0;
}