#include <iostream>
using namespace std;

void getValue(int a, int b = 60) { // Only last argument can be Default

    int sum = a + b;
    cout << "Sum: " << sum << endl;
}

int main() {
    cout << "Default Parameter:- \n" << endl;

    getValue(45);
    getValue(14, 25);

    return 0;
}