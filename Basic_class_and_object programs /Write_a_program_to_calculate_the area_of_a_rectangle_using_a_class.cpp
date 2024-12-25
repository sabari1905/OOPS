#include<iostream>
using namespace std;

class Rectangle{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    void setLength(double l) {
        if (l > 0) {
            length = l;
        } else {
            cout << "Invalid length. It must be greater than 0." << endl;
        }
    }
    void setWidth(double w) {
        if (w > 0) {
            width = w;
        } else {
            cout << "Invalid width. It must be greater than 0." << endl;
        }
    }
    double getLength() {
        return length;
    }
    double getWidth() {
        return width;
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
    Rectangle rect(10.5, 5.5);

    cout << "Initiate Rectangle Details:" << endl;
    rect.displayDetails();

    rect.setLength(15.0);
    rect.setWidth(7.5);

    cout << "\nUpdated Rectangle Details:" << endl;
    rect.displayDetails();

    return 0;
}