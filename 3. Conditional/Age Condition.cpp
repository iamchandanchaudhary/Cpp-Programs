#include <iostream> 
using namespace std;

int main() {
    cout << "Age Condition :- \n" << endl;

    int age;
    cout << "Enter age : ";
    cin >> age;

    if(age >= 18 && age <= 100) {
        cout << "You are adult" << endl;
    }
    else if(age >= 13 && age < 18) {
        cout << "You are Teeneger" << endl;
    }
    else if(age > 5 && age < 13) {
        cout << "You are Child" << endl;
    }
    else if(age <= 5 && age >= 0) {
        cout << "You are Kid" << endl;
    }
    else {
        cout << "Invalid age!" << endl;
    }

    cout << "\nThank you :)" << endl;
}