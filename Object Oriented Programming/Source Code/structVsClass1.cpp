#include<iostream>
using namespace std;

struct StudentStruct{
    int gpa;
};

class StudentClass{
    int gpa;
};
int main(){
    StudentClass Mohamed;
    StudentStruct Ahmed;
    //Ahmed is struct instance so gpa is public
    //(could be accesed and modified)
    Ahmed.gpa = 3.45;
    //Mohamed is class instance so gpa is private
    //couldn't be accesed and modified)   
    // Mohamed.gpa = 3.58; //error
    return 0;
}