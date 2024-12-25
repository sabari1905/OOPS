#include<iostream>
#include<string>
using namespace std;

class Student {
private:
    // Data Members
    int id;
    string name;
    int age;
    string grade;

public:
    // Default Constructor
    Student() {
        id = 0;
        name = "Unknown";
        age = 0;
        grade = "None";

    }
    // Parameterized Constructor
    Student(int s_id, string s_name, int s_age, string s_grade) {
        id = s_id;
        name = s_name;
        age = s_age;
        grade = s_grade;

    }
    // Setter Methods
    void setId(int s_id) { id = s_id; }
    void setName(string s_name) { name = s_name; }
    void setAge(int s_age) {
        if (s_age > 0) {
            age = s_age;
        }else {
            cout << "Invalid age! Must be greater than 0." << endl;

        }
    }
    void setGrade(string s_grade) { grade = s_grade; }
    // Getter Methods
    int getId() { return id; }
    string getName() { return name; }
    int getAge() { return age; }
    string getGrade() { return grade; }

    // Display Method
    void displayDetails() {
        cout << "Student Details: " << endl;
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main(){
    // Using Default Constructor
    Student student1;
    cout << "Default Constructor Details: " << endl;
    student1.displayDetails();

    // Using Parameterized Constructor
    Student student2(101, "John Doe", 20, "A");
    cout << "\nParameterized Constructor Details: " << endl;
    student2.displayDetails();

    // Modifying Details Using Setters
    student1.setId(102);
    student1.setName("Jane Smith");
    student1.setAge(19);
    student1.setGrade("B");
    cout << "\nDetails after using setters: " << endl;
    student1.displayDetails();

    return 0;

}