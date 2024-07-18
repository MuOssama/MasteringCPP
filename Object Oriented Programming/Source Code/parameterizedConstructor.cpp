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
    //function member
    void sound(string sound){
        cout<<name<<" have "<<sound<<" sound\n";
    }
};

int main(){
    Animal tiger("tigress");
    tiger.sound("roar");
    return 0;
}