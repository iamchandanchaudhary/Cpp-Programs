#include <iostream>
using namespace std;

int main() {
    cout << "Square Pattern :- \n" << endl;

    int n = 5;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}