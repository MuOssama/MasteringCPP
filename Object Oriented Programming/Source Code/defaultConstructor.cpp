#include<iostream>
using namespace std;

class Animal{
    public:
    string name;
    int age;
    float length;
    
    //default constructor
    Animal(){
        cout<<"constructor called, enter animal name: \n";
        cin>>name;
    }
    //function member
    void sound(string sound){
        cout<<name<<" have "<<sound<<" sound\n";
    }
};

int main(){
    Animal tiger;
    tiger.sound("roar");
    return 0;
}