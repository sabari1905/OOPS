#include<iostream>
using namespace std;

class Person {
private:

    string name;
    int age;

public:
    void setName(string n) {
        name = n;
    }
    string getName() {
        return name;
    }

    void setAge(int a) {
        if (a>=0) {
            age = a;
        } else {
            cout << "Invalid age! Setting age to 0." << endl;
            age = 0;
        }
    }
    int getAge() {
        return age;
    }
     void displayDetails() {
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
     }
};

int main() {
    Person person;

    person.setName("John Doe");
    person.setAge(25);

    cout << "Using Getter Methods:" << endl;
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;

    cout << "\nUsing Display Function:" << endl;
    person.displayDetails();

    person.setAge(-5);
    cout << "\nAfter setting Invalid Age:" << endl;
    person.displayDetails();

    return 0;
}