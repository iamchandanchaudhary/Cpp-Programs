#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Method to display details
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Create an array of objects
    Person people[] = {
        Person("Alice", 25),
        Person("Bob", 30),
        Person("Charlie", 35)
    };

    // Access elements in the array
    for (int i = 0; i < 3; i++) {
        people[i].display();
    }

    return 0;
}