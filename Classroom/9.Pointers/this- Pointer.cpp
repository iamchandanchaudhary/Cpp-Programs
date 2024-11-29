#include <iostream>
using namespace std;

// Class that uses this pointer
class A {
  public:
    int a;
    A(int a) {

        // Assigning a of this object to
        // function argument a
        this->a = a;
    }
    void display() {

        // Accessing a of this object
        cout << "Value: " << a << endl;
    }
};

int main() {

    // Checking if this works for the object
    A o(10);
    o.display();

    return 0;
}