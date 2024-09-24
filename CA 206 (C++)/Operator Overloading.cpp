#include <iostream>    
using namespace std;

class Test {    
    private:

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

    void printData() {
        cout << "Result : " << first << " + " << second << "i" << endl;
    }

    // Operator Overloading Syntax
    Test operator +(Test c) {

        Test temp;
        temp.first = first + c.first;
        temp.second = second + c.second;
        return temp;
    }
       
};

int main() {

      cout << "Operator Overloading :- \n" << endl;

      Test aa(5, 6);
      Test bb(4, 8);
      Test cc;

      cc = aa + bb;
      cc.printData();

      return 0;
}    