#include <iostream>
#include <string>
using namespace std;

class DataBase {
    private:
    string passward;

    public:
    string name;
    int age;
    string gender;
    // int sallary;

    protected:
    int sallary;

};

class Employees : public DataBase {
    public:
    int sallary;

    void getInfo() {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Gender : " << gender << endl;
        cout << "Sallary : " << sallary << "\n" << endl;
    }
};


int main() {
    cout << "Abstraction(Access Modifires) :- \n" << endl;

    Employees e1;
    e1.name = "Vipul Sharma";
    e1.age = 28;
    e1.gender = "Male";
    e1.sallary = 32000;

    e1.getInfo();

    Employees e2;
    e2.name = "Ashok Mishra";
    e2.age = 26;
    e2.gender = "Male";
    e2.sallary = 25000;

    e2.getInfo();
    
    return 0;
}