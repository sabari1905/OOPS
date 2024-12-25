#include<iostream>
using namespace std;

class Counter {
private:
    // Static data member
    static int count;

public:
    // Constructor
    Counter () {
        count++; // Increment count when object is created
    }

    // Static member function to get the count
    static int getcount() {
        return count;
    }

};

// Definition and initialization of the static data member
int Counter::count = 0;

int main() {
    // Display initial count
     cout << "Initial count: " << Counter::getcount() << endl;

     Counter c1, c2, c3;
    // Display count after creating three objects
     cout << "Count after creating three objects: " << Counter::getcount() << endl;

     return 0; 
}