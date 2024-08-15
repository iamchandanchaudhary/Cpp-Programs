#include <iostream> 
using namespace std;

int main() {
    cout << "Finding Capital & Small Letter :- \n" << endl;

    char letter;
    cout << "Enter Letter : ";
    cin >> letter;

    if(letter > 'a' && letter < 'z') {
        cout << "Small Letter" << endl;
    }
    else if(letter > 'A' && letter < 'Z') {
        cout << "Capital Letter" << endl;
    }
    else {
        cout << "Invalid Letter" << endl;
    }

    cout << "\nThank you :)" << endl;
}