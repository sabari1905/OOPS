#include<iostream>
using namespace std;

class Person {
public:
       string name;
       int age;

       void displayInfo() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;      
        }
};

int main() {
    Person person1;

    person1.name = "John Doe";
    person1.age = 25;

    cout << "Details of Person 1:" << endl;
    person1.displayInfo();

    Person person2;

    person2.name = "Jane Smith";
    person2.age = 30;

    cout << "\nDetails of Person 2:" << endl;
    person2.displayInfo();

    return 0;

}