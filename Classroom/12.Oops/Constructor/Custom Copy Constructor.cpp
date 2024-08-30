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

    // Non-Parameterized Constructor
    Student() {
        cout << "Student Data :- " << endl;

        course = "BCA";
    }

    // this-> Pointer
    Student(string name, string course, int age, double marks, int roll_no) {
        this->name = name;
        this->course = course;
        this->age = age;
        this->marks = marks;
        this->roll_no = roll_no;
    }

    // Custom Copy Constructor
    Student(Student &oriCopy) {
        cout << "Custom Copy Constructor :- " << endl;
        this->name = oriCopy.name;
        this->course = oriCopy.course;
        this->age = oriCopy.age;
        this->marks = oriCopy.marks;
        this->roll_no = oriCopy.roll_no;
    }

    void getStuInfo() {
        cout << "Name : " << name << endl;
        cout << "Course : " << course << endl;
        cout << "Age : " << age << endl;
        cout << "Marks : " << marks << endl;
        cout << "Roll no. : " << roll_no << "\n" << endl;
    }
};

int main() {
    cout << "Custom Copy Constructor in Oops :- \n" << endl;

    // 1st Student
    Student s1("Chandan Chaudhary", "BCA", 18, 98.4, 230010);
    // s1.name = "Chandan Chaudhary";
    // s1.course = "BCA";
    // s1.age = 18;
    // s1.marks = 98.4;
    // s1.roll_no = 230010;

    s1.getStuInfo();


    // 2nd Student
    Student s2; 
    s2.name = "Nikhil Chaudhary";
    // s2.course = "BSc";
    s2.age = 19;
    s2.marks = 95.4;
    s2.roll_no = 230011;

    s2.getStuInfo();

    // 3rd Student 
    Student s3(s1); // Custom Copy Constructor
    s3.getStuInfo();

    return 0;
}