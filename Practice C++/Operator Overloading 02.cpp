#include <iostream>
using namespace std;

class Test {
    public:
    int first;
    int second;

    Test() {
        first = 0;
        second = 0;
    }

    Test(int a, int b) {
        first = a;
        second = b;
    }

    Test operator+(Test c) {

        Test temp;
        temp.first = first + c.first;
        temp.second = second + c.second;
        return temp;
    }

    void getValue() {
        cout << first << " + " << second << endl;
    }
};

int main() {
    cout << "Operator Overloading :- \n" << endl;

    Test aa(20, 30);
    Test bb(25, 10);

    Test cc;

    cc = aa + bb;

    cc.getValue();

    return 0;
}