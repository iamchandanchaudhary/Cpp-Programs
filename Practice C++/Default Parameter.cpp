#include <iostream>
using namespace std;

void getValue(int a, int b = 60) {

    int sum = a + b;
    cout << "Sum: " << sum << endl;
}

int main() {
    cout << "Default Parameter:- \n" << endl;

    getValue(45);
    getValue(14, 25);
    return 0;
}