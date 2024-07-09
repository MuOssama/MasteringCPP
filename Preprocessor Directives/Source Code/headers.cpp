#include<iostream>
#include "headers1.h"
#include "headers2.h"
using namespace std;

void fillStruct(Student &stud){
    stud.name = studentName;
    stud.age = studentAge;
    stud.id = studentId;
}
int main(){
    Student Ahmed;
    fillStruct(Ahmed);
    cout<<"Student "<<Ahmed.name<<" has "<<Ahmed.age<<" yrs old.\nID: "<<Ahmed.id;
}

