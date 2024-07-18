#include<iostream>
using namespace std;

class Animal{
    public:
    string name;
    int age;
    float length;
    
    //default constructor
    Animal(string s, int a, float l):name(s),age(a),length(l){
        cout<<"enter animal name ";
        cin>>name;
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

class Tiger: public Animal{
    public:
    Tiger(string s, int a, float l):Animal(s,a,l){
        cout<<"Tiger "<<s<<" came\n"; 
    }
};

int main(){
    Tiger teg("teg",2,2.5);
    teg.sound("roar");
    return 0;
}