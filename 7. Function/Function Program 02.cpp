#include <iostream>
using namespace std;

void nameFunction() {
    cout << "Chandan Chaudhary" << endl;

    return;
}

void assistent() {
    nameFunction(); // calling another Function
    cout << "Stay Strong :)" << endl;
}

int main() {
    cout << "Function Program :- \n" << endl;

    assistent();
}