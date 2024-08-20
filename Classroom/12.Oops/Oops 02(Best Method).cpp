#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
    string name;
    string course;
    int age;
    double marks;
    int roll_no;

    void getStuInfo() {
        cout << "Student Name : " << name << endl;
        cout << "Student Course : " << course << endl;
        cout << "Student age : " << age << endl;
        cout << "Student marks : " << marks << endl;
        cout << "Student Roll no. : " << roll_no << "\n" << endl;
    }
};

int main() {
    cout << "Oops Program(Best Method) :- \n" << endl;

    // 1st Student
    Student s1;
    s1.name = "Chandan Chaudhary";
    s1.course = "BCA";
    s1.age = 18;
    s1.marks = 98.4;
    s1.roll_no = 230010;

    s1.getStuInfo();

    // 2nd Student
    Student s2;
    s2.name = "Nikhil Chaudhary";
    s2.course = "BSc";
    s2.age = 19;
    s2.marks = 95.4;
    s2.roll_no = 230011;

    s2.getStuInfo();

    return 0;
}