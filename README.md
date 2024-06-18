# MasteringCPP
this repo is for Mastering C++ and Modern C++ Book 
# Topics
# C++ Topics

## Basic Syntax and Structure
- **Variables and Data Types**
  - Primitive types: int, char, float, double, bool
  - Derived types: arrays, pointers, references
  - User-defined types: structs, enums, classes
- **Operators and Expressions**
  - Arithmetic operators: +, -, *, /, %
  - Relational operators: ==, !=, >, <, >=, <=
  - Logical operators: &&, ||, !
  - Bitwise operators: &, |, ^, ~, <<, >>
  - Assignment operators: =, +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=
  - Increment and decrement operators: ++, --
  - Conditional operator: ?:
- **Control Structures**
  - Conditional statements: if, if-else, nested if, switch-case
  - Looping statements: for, while, do-while
  - Jump statements: break, continue, goto, return

## Functions
- **Function Declaration and Definition**
  - Syntax: return_type function_name(parameters)
  - Function prototypes
  - Inline functions
- **Parameter Passing**
  - Pass-by-value
  - Pass-by-reference
  - Pass-by-pointer
  - Default arguments
- **Overloading and Inline Functions**
  - Function overloading
  - Inline functions
- **Recursive Functions**
  - Base case and recursive case
  - Examples: factorial, Fibonacci sequence

## Object-Oriented Programming (OOP)
- **Classes and Objects**
  - Class definition and declaration
  - Access specifiers: public, private, protected
  - Member variables and member functions
  - Object instantiation
- **Constructors and Destructors**
  - Default constructor
  - Parameterized constructor
  - Copy constructor
  - Destructor
- **Inheritance**
  - Base and derived classes
  - Types of inheritance: single, multiple, multilevel, hierarchical, hybrid
  - Constructor and destructor calls in inheritance
- **Polymorphism**
  - Compile-time polymorphism: function overloading, operator overloading
  - Runtime polymorphism: virtual functions, pure virtual functions, abstract classes
- **Encapsulation**
  - Data hiding and abstraction
  - Accessor and mutator functions
- **Abstraction**
  - Abstract classes and interfaces
- **Operator Overloading**
  - Overloading unary and binary operators
  - Overloading operators using member and friend functions

## Advanced OOP Concepts
- **Virtual Functions and Abstract Classes**
  - Virtual functions
  - Pure virtual functions
  - Abstract classes
- **Multiple Inheritance**
  - Syntax and usage
  - Diamond problem and virtual inheritance
- **Friend Functions and Classes**
  - Friend functions
  - Friend classes
- **Static Members**
  - Static member variables and functions
  - Class-level data and behavior

## Templates
- **Function Templates**
  - Template syntax and usage
  - Specialization of function templates
- **Class Templates**
  - Template classes
  - Member function templates
- **Template Specialization**
  - Full and partial specialization

## Standard Template Library (STL)
- **Containers**
  - Sequence containers: vector, list, deque, array
  - Associative containers: set, map, multiset, multimap
  - Unordered containers: unordered_set, unordered_map, unordered_multiset, unordered_multimap
  - Container adaptors: stack, queue, priority_queue
- **Iterators**
  - Input, output, forward, bidirectional, random access iterators
  - Iterator functions: begin(), end(), rbegin(), rend()
- **Algorithms**
  - Non-modifying: find, count, equal, search
  - Modifying: copy, transform, swap, fill, replace, remove, unique
  - Sorting and searching: sort, stable_sort, partial_sort, nth_element, binary_search, lower_bound, upper_bound, equal_range
- **Function Objects**
  - Functors and their usage
  - Predefined function objects in `<functional>`

## Exception Handling
- **try, catch, throw**
  - Syntax and usage
  - Multiple catch blocks
  - Catching all exceptions
- **Standard Exceptions**
  - Hierarchy of standard exceptions
  - Defining custom exceptions

## File I/O
- **Streams**
  - Input/output stream classes: ifstream, ofstream, fstream
  - Input/output operations
- **File Operations**
  - Opening, closing files
  - Reading from and writing to files
  - Binary file operations

## Memory Management
- **Pointers and References**
  - Pointer declaration, initialization, and dereferencing
  - Pointer arithmetic
  - References and reference variables
- **Dynamic Memory Allocation**
  - new and delete operators
  - Dynamic arrays
- **Smart Pointers**
  - `std::unique_ptr`
  - `std::shared_ptr`
  - `std::weak_ptr`

## Multithreading and Concurrency
- **Thread Management**
  - Creating and managing threads
  - Joining and detaching threads
- **Mutexes and Locks**
  - Mutual exclusion with std::mutex
  - Locking mechanisms: std::lock_guard, std::unique_lock
- **Condition Variables**
  - Synchronization with std::condition_variable

## Preprocessor Directives
- **Macros**
  - #define, #undef, #ifdef, #ifndef, #if, #else, #elif, #endif
- **Conditional Compilation**
  - Conditional compilation directives

## Namespaces
- **Using and Defining Namespaces**
  - Defining a namespace
  - Using a namespace
  - Nested namespaces

## Lambda Expressions
- **Syntax and Usage**
  - Basic lambda syntax
  - Capturing variables by value and reference
  - Lambda with parameters and return type

## Move Semantics and Rvalue References
- **Move Constructors**
  - Syntax and usage
  - Benefits of move constructors
- **Move Assignment Operator**
  - Syntax and usage

## C++11 to C++20 Additions
- **Various new features and improvements**
  - Enhancements in language and library features

# Modern C++ (C++11 to C++17)

## C++11

1. **Auto Keyword**
   - Type inference for variables
   ```cpp
   auto x = 5; // x is an int
