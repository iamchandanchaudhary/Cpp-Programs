#include <iostream>
using namespace std;

class Demo {
    public:
    int a;

    void getData() {
        cout << "Enter Value : ";
        cin >> a;
    }

    void putData() {
        cout << "Value of A : " << a << "\n" << endl;
    }

    Demo operator +(Demo bb) {
        Demo aa, cc;
        cc.a = a + bb.a;

        cc = aa + bb;
        return cc;
    }
    
};

int main() {
    cout << "Operator Overloading :- \n" << endl;

    Demo aa, bb, cc;

    aa.getData();
    aa.putData();

    // cc = aa + bb;

    // cout << "Value : " << endl;

    bb.getData();
    bb.putData();

    cc.getData();
    cc.putData();
}