#include <iostream>
using namespace std;

int main() {
    cout << "Down Half Pyramid Pattern :- \n" << endl;

    int n = 5;

    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}