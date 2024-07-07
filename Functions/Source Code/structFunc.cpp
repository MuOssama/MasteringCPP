#include<iostream>
using namespace std;

struct Student{
  string name;
  int id;  
};

Student fillStruct(); //function Declaration
int main(){
    Student Ahmed = fillStruct();
    cout<<"Student: "<<Ahmed.name<<" has ID of "<<Ahmed.id;
}

Student fillStruct(){ //function Definition
    Student student;
    string name;
    int id;
    cout<<"enter your name: ";
    cin>>student.name;
    cout<<"enter your ID: ";
    cin>>student.id;
    return student;
}
