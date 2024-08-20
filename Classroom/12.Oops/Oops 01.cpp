#include <iostream>
#include <string>
using namespace std;

class Teacher {
    public:

    // Properties or Attributes
    string name;
    string depart;
    int age;
    string subject;

    // methods or member functions
    void changeDep(string newDepart) {
        newDepart = depart;
    }
};

int main() {
    cout << "Oops Program :- \n" << endl;

    // 1st Teacher
    Teacher t1;

    t1.name = "Vijay Partap";
    t1.depart = "BCA";
    t1.age = 34;
    t1.subject = "Computer Organisation";

    cout << "Teacher Name : " << t1.name << endl;
    cout << "Department Name : " << t1.depart << endl;
    cout << "Teacher age : " << t1.age << endl;
    cout << "Subject Teacher : " << t1.subject << endl;

    // 2nd Teacher
    Teacher t2;

    t2.name = "Saumya Singh";
    t2.depart = "B-Tech";
    t2.age = 28;
    t2.subject = "Cyber Crime";

    cout << "\nTeacher Name : " << t2.name << endl;
    cout << "Department Name : " << t2.depart << endl;
    cout << "Teacher age : " << t2.age << endl;
    cout << "Subject Teacher : " << t2.subject << endl;

    return 0;
}