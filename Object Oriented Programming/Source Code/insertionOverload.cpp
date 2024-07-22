#include<iostream>
using namespace std;
#define cageLength 4
class Animal{
    private:
    string name;
    int age;
    float length;
    
    public:
    //constructor
    Animal(string s, int a, float l):name(s),age(a),length(l){
    }
    //copy constructor
    Animal(const Animal& oldObject){
        name = oldObject.name;
    }
    //function member
    void sound(string sound){
        cout<<name<<" have "<<sound<<" sound\n";
    }
    //getters
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }  
    float getLength(){
        return length;
    }
    //setter
    void setName(string s){
        name = s;
    }
    void setAge(int a){
        if(a>0)
        age = a;
    }
    void setLength(float l){
        if(l>0) 
        length = l;
    }

    //destructor
    ~Animal(){
        cout<<"destructor is called for instance: "<<name<<endl;
    }
    friend ostream& operator<<(ostream& out, Animal& obj);
};

ostream& operator<<(ostream& out, Animal& obj){
    out<<"Animal name: "<<obj.name<<" has "<<obj.age;
    out<<" yrs and "<<obj.length<<" in length\n";
    return out;
}
int main(){
    Animal Tiger("Teg",2,1.5);
    cout<<Tiger;
    return 0;
}



