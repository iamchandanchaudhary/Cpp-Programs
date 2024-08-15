#include <iostream>
using namespace std;

int main() {
    cout << "Comparision :- \n" << endl;

    int a;
    cout << "Enter 1st value : ";
    cin >> a;

    int b;
    cout << "Enter 2nd value : ";
    cin >> b;

    if(a == b) {
        cout << "Both are Equal!" << endl;
    } 
    else if(a > b) {
        cout << "A is Greater!" << endl;
    } 
    else {
        cout << "B is Greater!" << endl;
    }
}