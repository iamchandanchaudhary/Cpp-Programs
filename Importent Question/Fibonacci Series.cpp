#include <iostream>
using namespace std;

int main() {
    cout << "Fibnacci Series :- \n" << endl;

    int a = 0; 
    int b = 1;

    int n;
    cout << "Enter Series numbber : ";
    cin >> n;

    cout << "Fibnacci Series of " << n << " is : ";
    for(int i = 1; i <= n; i++) {
        int c = a + b;

        cout << a << " ";

        a = b;
        b = c;
    }
}