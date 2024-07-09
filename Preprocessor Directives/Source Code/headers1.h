#ifndef HEADERS1
#define HEADERS1

#include<string>

struct Student{
    std::string name;
    int age;
    int id;
};

void fillStruct(Student &stud);

#endif