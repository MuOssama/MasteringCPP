#include <iostream>
using namespace std;

int main() {
    string name;
    unsigned short age,salary;
    float gpa;
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"enter your age and salary "<<endl;
    cin>>age>>salary;
    cout<<"enter your gpa"<<endl;
    cin>>gpa;
    
    cout<<"Introduction\nMy name is:"<<name<<endl;
    cout<<"I am "<<age<<"years old "<<"my salary is: "<<salary<<endl; 
    cout<<"my GPA is: "<<gpa;
    return 0;
}