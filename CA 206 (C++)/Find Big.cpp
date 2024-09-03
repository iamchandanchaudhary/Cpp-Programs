#include <iostream>
using namespace std;

int findBig(int a, int b) {

    cout << endl;
    if(a > b) {
        cout << "A is Greater!" << endl;
    } else {
        cout << "B is Greater!" << endl;
    }

}

int main() {
    cout << "Fing Biggest Value : \n" << endl;

    int a, b;
    cout << "Enter 1st Value : ";
    cin >> a;

    cout << "Enter 2nd Value : ";
    cin >> b;

    findBig(a, b);
}
