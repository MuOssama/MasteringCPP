#include<iostream>
using namespace std;

struct employee{
    string Name;
    int salary;
    short workingHrs;
};

int main(){
    //create object of struct employee
    employee emp1;
    
    cout<<"enter Name, Salary, Working Hrs respctivily:\n";
    //entering the employee data from user
    cin>>emp1.Name>>emp1.salary>>emp1.workingHrs;
    //printing the employee data
    cout<<"employee: "<<emp1.Name<<" salary: "<<emp1.salary<<" working hours: "<<emp1.workingHrs;
    
}