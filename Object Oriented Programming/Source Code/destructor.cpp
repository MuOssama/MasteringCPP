#include<iostream>
using namespace std;

class Animal{
    public:
    string name;
    int age;
    float length;
    
    //Parameterized constructor
    Animal(string s): name(s){
    }
    
    //copy constructor
    Animal(const Animal& oldObject){
        name = oldObject.name;
    }
    //function member
    void sound(string sound){
        cout<<name<<" have "<<sound<<" sound\n";
    }
    //destructor
    ~Animal(){
        cout<<"destructor is called for instance: "<<name<<endl;
    }
};

int main(){
    Animal tiger("tigress");
    tiger.sound("roar");
    return 0;
}