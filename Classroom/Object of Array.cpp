#include <iostream>
#include <string>
using namespace std;

// Define a class with an array as a member
class Student {
private:
    int scores[5];

public:
    // Constructor
    Student(int stu[]) {
        for (int i = 0; i < 5; i++) {
            scores[i] = stu[i];
        }
    }

    // Method to display student details
    void display() {
        cout << "Scores: ";
        for (int i = 0; i < 5; i++) {
            cout << scores[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int scores[] = {90, 85, 88, 92, 80};

    // Create objects of the Student class
    Student student1(scores);

    // Display details
    student1.display();

    return 0;
}
