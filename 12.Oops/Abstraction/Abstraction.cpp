#include <iostream>
#include <string>
using namespace std;

// Abstract Class or Parent Class
// Abstract Class does not use to make object, it is use for only make Blueprint
class DataBase { 

    public:
    string name;
    int age;
    string gender;

};

// Inherit Data from Database class
class Student : public DataBase {
    public:
    string course;
    string grade;
    int rollno;

    void getInfo() {
        cout << "Student Data :- " << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Gender : " << gender << endl;
        cout << "Course : " << course << endl;
        cout << "Grade : " << grade << endl;
        cout << "Roll no. : " << rollno << "\n" << endl;
    }
};

// Inherit Data from Database class
class Employee : public DataBase {
    public:
    int empId;
    string position;
    int sallary;

    void getInfo() {
        cout << "Employee Data :- " << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Gender : " << gender << endl;
        cout << "Employee Id : " << empId << endl;
        cout << "Position : " << position << endl;
        cout << "Sallary : " << sallary << "\n" << endl;
    }
};


int main() {
    cout << "Abstraction :- \n" << endl;

    // Student Data
    Student s1;
    s1.name = "Chandan Chaudhary";
    s1.age = 18;
    s1.gender = "Male";
    s1.course = "BCA";
    s1.grade = "O";
    s1.rollno = 230010;

    s1.getInfo();

    Student s2;
    s2.name = "Ajay Mishra";
    s2.age = 22;
    s2.gender = "Male";
    s2.course = "MCA";
    s2.grade = "A";
    s2.rollno = 230011;

    s2.getInfo();

    // Employee Data
    Employee e1;
    e1.name = "Vinay Verma";
    e1.age = 25;
    e1.gender = "Male";
    e1.empId = 534;
    e1.position = "Project Manager";
    e1.sallary = 34000;

    e1.getInfo();
    
    return 0;
}