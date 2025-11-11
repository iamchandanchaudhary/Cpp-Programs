#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
    string name = "Chandan";
    int age;

    //  void getInfo(Student);
    friend void getInfo(Student s1) {
        cout << "Name : " << s1.name << endl;
    }
};

int main() {
    Student a1;
    // a1.name = "Chandan";
    getInfo(a1);
}