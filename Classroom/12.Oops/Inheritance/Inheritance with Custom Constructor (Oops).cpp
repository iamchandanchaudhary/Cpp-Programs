#include <iostream>
#include <string>

using namespace std;

    class Person {
        public:
            string name;
            int age;
            string gender;

        // Custom Copy Constructor
        Person(string name, int age, string gender) {
            this->name = name;
            this->age = age;
            this->gender = gender;
        }
    };

    // Inherite the property of Another Class
    class Student : public Person {
        public:
            string course;
            int rollno;

        Student(string name, int age, string gender, string course, int rollno) : Person(name, age, gender) {
            this->course = course;
            this->rollno = rollno;
        }

        void getInfo() {
            cout << "Name : " << name << endl; 
            cout << "Age : " << age << endl; 
            cout << "Gender : " << gender << endl; 
            cout << "Course : " << course << endl; 
            cout << "Roll No. : " << rollno << "\n" << endl; 
        }
    };

    int main() {
        cout << "Inheritance in Oops :- \n" << endl;

        Student s1("Chandan Chaudhary", 18, "Male", "BCA", 230010);
        // s1.name = "Chandan Chaudhary";
        // s1.age = 18;
        // s1.gender = "Male";
        // s1.course = "BCA";
        // s1.rollno = 230010;

        s1.getInfo();

        return 0;
    }