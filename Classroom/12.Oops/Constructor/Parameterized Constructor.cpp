#include <iostream>
#include <string>
using namespace std;

class Student {
    public:

    // Non-Parameterized Constructor
    // Student() {
    //     cout << "Student Data :- " << endl;

    //     course = "BCA";
    // }

    // Parameterized Constructor
    Student(string n, string c, int a, double m, int roll) {
        name = n;
        course = c;
        age = a;
        marks = m;
        roll_no = roll;
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
    cout << "Parameterized Constructor in Oops :- \n" << endl;

    // 1st Student
    Student s1("Chandan Chaudhary", "BCA", 18, 98.4, 230010); // Constructor call
    // s1.name = "Chandan Chaudhary";
    // s1.course = "BCA";
    // s1.age = 18;
    // s1.marks = 98.4;
    // s1.roll_no = 230010;

    s1.getStuInfo();


    // 2nd Student
    Student s2("Nikhil Chaudhary", "BSc", 19, 95.4, 230011); // Constructor call
    s2.getStuInfo();

    return 0;
}