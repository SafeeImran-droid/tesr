#include <iostream>
#include <string> // Need to include <string> for string type
using namespace std;

// Base class: Person
class Person {
public:
    string name;

    // Constructor for Person
    Person(string n) : name(n) {
        cout << "Person constructor called for " << name << endl;
    }

    void displayPerson() {
        cout << "Name : " << name << endl;
    }
};

// Derived class: Student (inherits from Person)
class Student : public Person {
public:
    int studentID;

    // Constructor for Student
    // It must explicitly call the base class (Person) constructor
    Student(string n, int id) : Person(n), studentID(id) {
        cout << "Student constructor called for ID " << studentID << endl;
    }

    void displayStudent() {
        cout << "StudentID : " << studentID << endl;
    }
};

// Derived class: Graduate (inherits from Student)
class Graduate : public Student {
public:
    string thesisTitle;

    // Constructor for Graduate
    // It must explicitly call its direct base class (Student) constructor
    Graduate(string n, int id, string thesis) : Student(n, id), thesisTitle(thesis) {
        cout << "Graduate constructor called for thesis " << thesisTitle << endl;
    }

    void displayGraduate() {
        cout << "Thesis : " << thesisTitle << endl;
    }
};

int main() {
    // Create a Graduate object, passing all required parameters to the constructor
    Graduate g1("safee", 123, "AI");

    cout << "\n--- Displaying Information ---\n";
    g1.displayPerson();
    g1.displayStudent();
    g1.displayGraduate();

    return 0;
}
