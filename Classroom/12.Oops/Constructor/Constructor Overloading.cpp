#include <iostream>
#include <string>
using namespace std;

class Student {
    public:

    // Non-Parameterized Constructor
    Student() {
        cout << "Student Data :- " << endl;

        course = "BCA";
    }

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
    cout << "Constructor Overloading in Oops :- \n" << endl;

    // 1st Student
    // Calling With help of Parameterized Constructor
    Student s1("Chandan Chaudhary", "BCA", 18, 98.4, 230010); // Constructor call
    // s1.name = "Chandan Chaudhary";
    // s1.course = "BCA";
    // s1.age = 18;
    // s1.marks = 98.4;
    // s1.roll_no = 230010;

    s1.getStuInfo();


    // 2nd Student
    // Calling With help of non-Parameterized Constructor
    Student s2; // Constructor call
    s2.name = "Nikhil Chaudhary";
    // s2.course = "BSc";
    s2.age = 19;
    s2.marks = 95.4;
    s2.roll_no = 230011;

    s2.getStuInfo();

    return 0;
}