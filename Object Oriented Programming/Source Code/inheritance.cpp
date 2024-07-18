#include<iostream>
using namespace std;

class Animal{
    public:
    string name;
    int age;
    float length;
    
    //default constructor
    Animal(){
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

class Tiger: Animal{
    
};
class Lion: public Animal{
    
};
int main(){
    Tiger teg;
    Lion leo;
    leo.sound("growls");
    //teg.sound("roar"); 
    //teg will throw error
    //as the default accesss modifer for inheritance in classes is private ! 
    return 0;
}