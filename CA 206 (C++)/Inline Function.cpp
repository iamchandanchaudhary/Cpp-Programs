#include <iostream>
using namespace std;

class Student {
    public :
    int age = 18;

    inline void getInfo() {
        cout << "Age : " << age << endl;
    }
};

int main() {
    cout << "Inline Function :- \n" << endl;

    Student obj;

    obj.getInfo();
    
}