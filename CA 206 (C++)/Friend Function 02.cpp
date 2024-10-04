#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
    int a;
    int b;

    friend void getInfo(Student s1) {
        cout << "Enter 1st Value : ";
        cin >> s1.a;

        cout << "Enter 2nd Value : ";
        cin >> s1.b;

        cout << "\nAddition : " << s1.a + s1.b << endl;
    }
};

int main() {
    cout << "Using Friend Function :- \n" << endl;

    
    Student a1;
    getInfo(a1);
    // a1.getInfo();
}