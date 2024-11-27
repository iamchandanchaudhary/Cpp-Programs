#include <iostream>
using namespace std;

int main() {
    cout << "Table with while loop :- \n" << endl;

    int n = 5;
    int i = 1;

    while(i <= 10) {
        cout << n << "*" << i << " = " << n * i << endl;
        i++;
    }
}