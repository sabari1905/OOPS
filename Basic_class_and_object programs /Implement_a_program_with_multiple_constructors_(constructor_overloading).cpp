#include<iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:

    Rectangle() {
        length = 0.0;
        width =0.0;
    }
    Rectangle(double side) {
        length = side;
        width = side;
    }
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double calculateArea() {
        return length * width;
    }

    void displayDetails() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
    } 
};

int main() {
    Rectangle rect1;
    cout << "Rectangle 1 (Default Constructor): " << endl;
    rect1.displayDetails();

    Rectangle rect2(5.0);
    cout << "Rectangle 2 (Square Constructor:)" << endl;
    rect2.displayDetails();

    Rectangle rect3(4.0, 6.0);
    cout << "Rectangle 3 (Rectangle Constructor:)" << endl;
    rect3.displayDetails();

    return 0;


}