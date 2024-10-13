#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "String Implementation :- \n" << endl;

    string firstName = "Chandan";
    string lastName = "Chaudhary";

    string fullName = firstName + " " + lastName;

    cout << "Full Name : " << fullName << endl;
    cout << "Name Length : " << fullName.length() << endl;

    cout << "\nFirst Character : " << fullName[0] << endl;
    cout << "Last Character : " << fullName[fullName.length() - 1] << endl;

    fullName[0] = 'A';
    cout << "Modified Name : " << fullName << endl;

    return 0;
}