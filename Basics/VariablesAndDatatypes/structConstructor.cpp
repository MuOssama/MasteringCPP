#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;

    // Constructor
    Person(string n, int a) : name(n), age(a) {
       cout << "Constructor called for " << name << endl;
    }

    // Member function to display person details
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Creating an object of the Person struct
    Person person1("John Doe", 30);

    // Displaying the details of person1
    person1.display();

    return 0;
}
