#include<iostream>
using namespace std;

class Animal{
    public:
    string name;
    int age;
    float length;
    //function member
    void sound(string sound){
        cout<<name<<"have "<<sound<<" sound\n";
    }
};

int main(){
    return 0;
}