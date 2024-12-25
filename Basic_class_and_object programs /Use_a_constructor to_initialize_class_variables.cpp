#include <iostream>
using namespace std;

class Car {
public:

    string brand;
    int year;
    float price;

    Car(string b, int y, float p) {
        brand = b;
        year = y;
        price = p;
    }

    void displayDetails() {
        cout << "Car Details: " << endl;
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {

    Car car1("Toyota", 2021, 25000.50);
    Car car2("Honda", 2022, 27500.75);

    cout << "Details of Car1:" << endl;
    car1.displayDetails();

    cout << "\nDetails of Car2:" << endl;
    car2.displayDetails();

    return 0;
}