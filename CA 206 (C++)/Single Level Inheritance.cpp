#include <iostream>
using namespace std;

class Animal {

    public:
    void eat() {
        cout << "Animal eat Food" << endl;
    }
};

class Birds : public Animal {
    public:
    void foot() {
        cout << "Two Foot" << endl;
    }
};

class Parrot : public Birds {
    public: 
    void color() {
        cout << "Green Color" << endl;
    }
};

int main() {

        cout << "Inheritance :- \n" << endl;

        Parrot p1;
        p1.eat();
        p1.foot();
        p1.color();

        return 0;
}