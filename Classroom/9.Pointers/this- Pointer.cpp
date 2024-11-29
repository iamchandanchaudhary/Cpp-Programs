#include <iostream>
using namespace std;

// Class that uses this pointer
class Value {
  public:
    int a;
    Value(int a) {

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
    Value obj(10);
    obj.display();

    return 0;
}