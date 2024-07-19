#include <iostream>
using namespace std;

class SuperClass {
public:
    int x;
};

class ClassA :virtual public SuperClass {
public:
    int y;
};

class ClassB : virtual public SuperClass {
public:
    int z;
};

class ClassC : public ClassA, public ClassB {
    // ClassC has both y and z, but x is ambiguous
};

int main() {
    ClassC obj;
    
    obj.x = 15; //error: x is ambiguous!

    return 0;
}
