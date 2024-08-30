#include <iostream>
#include <string>

using namespace std;

    class Teacher {
        public:
            string subject;
            string sallary;
            string gender;

        // Constructor
        Teacher() {
            
        }
    };

    // Inherite the property of Another Class
    class Student {
        public:
            string name;
            string course;
            int age;
            int rollno;

        // Constructor
        Student() {
            
        }
    };

    // Mult-Level Inheritance
    class TA : public Teacher, public Student {
        public:
        string researchArea;

        // Constructor
        TA() {

        }

        void getInfo() {
            cout << "Name : " << name << endl; 
            cout << "Age : " << age << endl; 
            cout << "Subject : " << subject << endl;
            cout << "Gender : " << gender << endl; 
            cout << "Course : " << course << endl;
            cout << "Roll No. : " << rollno << endl; 
            cout << "Sallary : " << sallary << endl;
            cout << "Research Area : " << researchArea << "\n" << endl;
        }
    };

    int main() {
        cout << "Multi-Level Inheritance (Oops) :- \n" << endl;

        TA s1;
        s1.name = "Chandan Chaudhary";
        s1.age = 18;
        s1.subject = "Java (DSA)";
        s1.course = "BCA";
        s1.gender = "Male";
        s1.rollno = 230012;
        s1.sallary = "91k";
        s1.researchArea = "ML";

        s1.getInfo();

        TA s2;
        s2.name = "Aman Chaudhary";
        s2.age = 19;
        s2.subject = "C++ (DSA)";
        s2.course = "MCA";
        s2.gender = "Male";
        s2.rollno = 230015;
        s2.sallary = "51k";
        s2.researchArea = "AI";

        s2.getInfo();

        return 0;
    }