#include <iostream>
using namespace std;

class Car {
public:
       string brand;
       int year;
       float price;

       void displayDetails() {
           cout << "Car Details:" << endl;
           cout << "Brand: " << brand << endl;
           cout << "Year: " << year << endl;
           cout << "Price: $" << price << endl;
       }
};

int main() {
    Car car1;

    car1.brand = "Toyota";
    car1.year = 2021;
    car1.price = 25000.50;

    cout << "Accessing Data Members Directly" << endl;
    cout << "Brand:" << car1.brand << endl;
    cout << "Year:" << car1.year << endl;
    cout << "Price: $" << car1.price << endl;

    cout << "\nAccessing Data Members Using Member Function:" << endl;
    car1.displayDetails();

    return 0;
}