#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Shape {
    public: 
    string name;
    int area;
    string colour;

    Shape() {
        cout << "Shape Details :- " << endl;
    }

    void getInfo() {
        cout << "Name : " << name << endl;
        cout << "Colour : " << colour << endl;
    }
};

// Hierarchial Inheritance
class Rectangle : public Shape {

    public:
    int length;
    int width;

    Rectangle() {

    }

    void rectInfo() {
        area = length * width;

        cout << "Length : " << length << endl;
        cout << "Width : " << width << endl;
        cout << "Area : " << area << "\n" << endl;
    }
};

// Hierarchial Inheritance
class Circle : public Shape {

    public: 
    int radius;

    Circle() {

    }

    void circleInfo() {
        area = 3.14 * pow(radius, 2);

        cout << "Radius : " << radius << endl;
        cout << "Area : " << area << "\n" << endl;
    }

};

int main() {
    cout << "Hierarchial Inheritance :- \n" << endl;

    // Rectangle Property
    Rectangle r1;
    r1.name = "Rectangle 1";
    r1.colour = "Red";
    r1.length = 12;
    r1.width = 5;

    r1.getInfo();
    r1.rectInfo();

    // Circle Property
    Circle c1;
    c1.name = "Circle 1";
    c1.colour = "Blue";
    c1.radius = 7;

    c1.getInfo();
    c1.circleInfo();

    return 0;
}