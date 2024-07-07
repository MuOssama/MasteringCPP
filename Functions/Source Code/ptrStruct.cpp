#include<iostream>
using namespace std;

struct Student{
    int age;
    string name;
    //constructor
    Student(int a, string n): age(a), name(n){}
};
int main(){
   Student Ahmed(25,"Ahmed");
   //assume age is 26 so we have to modifiy
   //we could modifi directly by Ahmed.age = 26
   //but in function, it is not applicable
   Student* ptr_struct = &Ahmed;
   
   ptr_struct->age = 26; //same as  *(ptr_struct).age = 26
   cout<<"The age of "<<ptr_struct->name<<" and have "<<ptr_struct->age<<" yrs old";
  }