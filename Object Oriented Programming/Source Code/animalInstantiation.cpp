#include<iostream>
using namespace std;

class Animal{
    public:
    string name;
    int age;
    float length;
    //function member
    void sound(string sound){
        cout<<name<<" have "<<sound<<" sound\n";
    }
};

int main(){
    Animal tiger;
    tiger.name = "tiger";
    tiger.sound("roar");
    return 0;
}