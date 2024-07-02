#include <iostream>
#include <string>

// Base struct
struct Employee {
    std::string name;
    int age;

    // Constructor for Employee
    Employee(const std::string& n, int a) : name(n), age(a) {}
};

// Derived struct for Writer
struct Writer : public Employee {
    // Constructor for Writer
    Writer(const std::string& name, int age) : Employee(name, age) {}

    // Specific method for Writer
    void writing() const {
        std::cout << name << " is writing a document." << std::endl;
    }
};

// Derived struct for Reviewer
struct Reviewer : public Employee {
    // Constructor for Reviewer
    Reviewer(const std::string& name, int age) : Employee(name, age) {}

    // Specific method for Reviewer
    void reviewing() const {
        std::cout << name << " is reviewing a document." << std::endl;
    }
};

int main() {
    // Create instances of Writer and Reviewer
    Writer writer("Alice", 30);
    Reviewer reviewer("Bob", 45);

    // Use specific methods
    writer.writing();    // Output: Alice is writing a document.
    reviewer.reviewing();// Output: Bob is reviewing a document.

    return 0;
}
