#include <iostream>
#include <string>
using namespace std;

class Shape {
    public: 
    string name;
    int area;
    string colour;

    Shape() {
        cout << "Shape Details :- " << endl;
    }
};

// Hierarchial Inheritance
class Rectangle : public Shape {

    public:
    int length;
    int width;

    Rectangle(string name, string colour, int length, int width, int area) {
        // area = length * width;

        cout << "Name : " << name << endl;
        cout << "Colour : " << colour << endl;
        cout << "Length : " << length << endl;
        cout << "Width : " << width << endl;
        cout << "Area : " << area << "\n" << endl;

    }
};

// Hierarchial Inheritance
class Circle : public Shape {

    public: 
    int radius;

    Circle(string name, string colour, int radius, int area) {
        cout << "Name : " << name << endl;
        cout << "Colour : " << colour << endl;
        cout << "Radius : " << radius << endl;
        cout << "Area : " << area << "\n" << endl;
    }

    // void getInfo() {
    //     cout << "Name : " << name << endl;
    //     cout << "Colour : " << colour << endl;
    //     cout << "Area : " << area << "\n" << endl;
    // }
};

int main() {
    cout << "Hierarchial Inheritance :- \n" << endl;

    Rectangle r1("Rectangle 1", "Red", 12, 5, 60);
    // r1.name = "Rectangle 1";
    // r1.colour = "Red";
    // r1.length = 12;
    // r1.width = 5;
    // r1.area = 60;

    Circle c1("Circle 1", "Blue", 7, 153);
    // c1.name = "Circle 1";
    // c1.colour = "Blue";
    // c1.radius = 7;
    // c1.area = 153;

    return 0;
}