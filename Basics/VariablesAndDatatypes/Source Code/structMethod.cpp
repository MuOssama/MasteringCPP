#include<iostream>
using namespace std;

struct employee{
    string Name;
    int salary;
    short workingHrs;
    
    //Method to enter employ data
    void setData(){
    cout<<"enter Name, Salary, Working Hrs respctivily:\n";
    //entering the employee data from user
    cin>>Name>>salary>>workingHrs;
    //printing the employee data 
    }
    //Method to print employee data
    void print(){

    cout<<"employee: "<<Name<<" salary: "<<salary<<" working hours: "<<workingHrs<<endl; 
    }
    
    //Method to apply bonus 
    char applyBonus(int bonus){
        salary = salary + bonus;
        return 's';
    }
};

int main(){
    //create object of struct employee
    employee emp1;
    emp1.setData();
    emp1.applyBonus(500);
    emp1.print();    
}