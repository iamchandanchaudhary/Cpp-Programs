#include <iostream>
using namespace std;

void getValue(int a, int b = 60) {

    int sum = a + b;
    cout << "Sum: " << sum << endl;
}

int main() {
    cout << "Default Parameter:- \n" << endl;

    getValue(45);
    getValue(14, 25); // 1st argument can Not be Default
    return 0;
}