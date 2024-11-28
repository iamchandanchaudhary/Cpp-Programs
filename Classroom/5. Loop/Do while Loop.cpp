#include <iostream>
using namespace std;

int main() {
    cout << "Table with Do while Loop:- \n" << endl;

    int n = 13;
    // cout << "Enter Value: ";
    // cin >> n;

    int i = 1;

    do {
        cout << n << " * " << i << " : " << n * i << endl;;
        i++;
    } while(i <= 10);

    cout << "\nThank You :)" << endl;

    return 0;
}