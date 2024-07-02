#include<iostream>
using namespace std;

//decleration
struct student{
    string name;
    int id;
    float gpa;
};

int main(){
    //create instance of a struct
    student Ahmed={"Ahmed",202410,3.45};
    /*Accessing 
      Accessing is done by dot operator .
    */
    cout<<"Name:"<<Ahmed.name<<" ID:"<<Ahmed.id<<" GPA:"<<Ahmed.gpa<<endl;
    //Assigning an instance of struct
    Ahmed.gpa = 3.58;
    cout<<"Name:"<<Ahmed.name<<" ID:"<<Ahmed.id<<" GPA:"<<Ahmed.gpa;
}