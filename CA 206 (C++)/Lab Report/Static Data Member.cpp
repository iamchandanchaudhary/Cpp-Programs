#include <iostream>
using namespace std;

class Test {
    public:
    int a;
    int b;

    // int x = 0;
    static int x; // initialised with 0

    void setInfo(int a, int b) {
        this->a = a;
        this->b = b;
        
        x = x + 1;
    }
    
    void getInfo() {
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;

        cout << "x : " << x << "\n" << endl;
    }
};

int Test::x;

int main() {
    cout << "Static Data Member :- \n" << endl;
    
    Test aa;
    aa.setInfo(10, 20);
    aa.getInfo();

    Test bb;
    bb.setInfo(15, 25);
    bb.getInfo();

    return 0;
}