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
        // cout << "Area : " << area << endl;
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

// Hybrid Inheritance
class Triangle : public Rectangle {
    public:

    void triangleInfo() {
        area = (length * width) / 2;

        cout << "Length : " << length << endl;
        cout << "Width : " << width << endl;
        cout << "Area : " << area << "\n" << endl;
    }
};

int main() {
    cout << "Hybrid Inheritance Oops :- \n" << endl;

    Rectangle r1;
    r1.name = "Rectangle 1";
    r1.colour = "Red";
    r1.length = 12;
    r1.width = 5;
    // r1.area = 60;

    r1.getInfo();
    r1.rectInfo();

    Circle c1;
    c1.name = "Circle 1";
    c1.colour = "Blue";
    c1.radius = 7;
    // c1.area = 153;

    c1.getInfo();
    c1.circleInfo();

    Triangle t1;
    t1.name = "Triangle 1";
    t1.colour = "Geen";
    t1.length = 15;
    t1.width = 10;
    // t1.area = 60;

    t1.getInfo();
    t1.triangleInfo();


    return 0;
}