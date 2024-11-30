#include <iostream>
#include <string>

using namespace std;

    class College {
        public:
            string clgName;
            string location;

    };

    // Inherite the property of Another Class
    class Department : public College {
        public:
            string course;
            string block;
    };

    // Mult-Level Inheritance
    class Student : public Department {
        public:
        string name;
        int age;
        string gender;
        int rollno;

        void getInfo() {
            cout << "College Name : " << clgName << endl;
            cout << "College Location : " << location << endl;
            cout << "Course : " << course << endl; 
            cout << "Block Name : " << block << endl;
            cout << "Name : " << name << endl; 
            cout << "Age : " << age << endl; 
            cout << "Gender : " << gender << endl; 
            cout << "Roll No. : " << rollno << "\n" << endl; 
        }
    };

    int main() {
        cout << "Multi-Level Inheritance (Oops) :- \n" << endl;

        Student s1;
        s1.clgName = "Integral University";
        s1.location = "Lucknow";
        s1.course = "BCA";
        s1.block = "E-Block";
        s1.name = "Chandan Chaudhary";
        s1.age = 18;
        s1.gender = "Male";
        s1.rollno = 230012;

        s1.getInfo();

        return 0;
    }