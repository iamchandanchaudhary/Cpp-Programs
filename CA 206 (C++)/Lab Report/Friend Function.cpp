#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
    string name = "Chandan";
    int age = 18;

    //  void getInfo(Student);
    friend void getInfo(Student s1) {
        cout << "Name : " << s1.name << endl;
        cout << "Age : " << s1.age << endl;
    }
};

int main() {
    cout << "Using Friend Function :- \n" << endl;


    Student a1;
    getInfo(a1);

    return 0;
}