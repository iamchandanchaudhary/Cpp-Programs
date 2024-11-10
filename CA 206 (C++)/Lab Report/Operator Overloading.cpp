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

    void getValue() {
        cout << "Result : " << first << " + " << second << endl;
    }

    Test operator +(Test c) {

        Test temp;
        temp.first = first + c.first;
        temp.second = second + c.second;
        return temp;
    }

};

int main() {
    cout << "Operator Overloading :- \n" << endl;

    Test aa(21, 10);
    Test bb(10, 15);

    Test cc;

    cc = aa + bb;

    cc.getValue();
}