#include <iostream>
using namespace std;

class Animal {
    public:

    void eat() {
        cout << "They eat Food" << endl;
    }
};

// Hierarchial Inheritance
class Domestic : public Animal {
    public:

    void animalEg() {
        cout << "Domestic Animal Eg : Cow, Dog, Cat, Camel etc. \n" << endl;
    }
};

class Wild : public Animal {
    public:

    void animalEg() {
        cout << "Wild Animal Eg : Lion, Tiger, Fox, Bear etc. \n" << endl;
    }
};

int main() {
    cout << "Hierarchial Inheritance :- \n" << endl;

    Domestic d1;
    d1.eat();
    d1.animalEg();

    Wild w1;
    w1.eat();
    w1.animalEg();
}