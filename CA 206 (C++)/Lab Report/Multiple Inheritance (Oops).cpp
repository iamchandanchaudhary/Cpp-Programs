#include <iostream>
#include <string>

using namespace std;

    class Teacher {
        public:
            string subject;
            string gender;
    };

    class Student {
        public:
            string name;
            int age;
    };

    // Mult-Level Inheritance
    class TA : public Teacher, public Student {
        public:
        string researchArea;

        void getInfo() {
            cout << "Name : " << name << endl; 
            cout << "Age : " << age << endl; 
            cout << "Subject : " << subject << endl;
            cout << "Gender : " << gender << endl;
            cout << "Research Area : " << researchArea << "\n" << endl;
        }
    };

    int main() {
        cout << "Multi-Level Inheritance (Oops) :- \n" << endl;

        TA s2;
        s2.name = "Aman Verma";
        s2.age = 19;
        s2.subject = "C++(DSA)";
        s2.gender = "Male";
        s2.researchArea = "AI";

        s2.getInfo();

        return 0;
    }