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
};

int main(){
    Animal tiger("tigress");
    Animal newtiger = tiger;
    newtiger.sound("roar");
    return 0;
}