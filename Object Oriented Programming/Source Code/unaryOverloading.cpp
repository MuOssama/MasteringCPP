#include<iostream>
using namespace std;

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
    friend Animal& operator++(Animal& obj);
};

Animal& operator++(Animal& obj){
    obj.age++;
    return obj;
}
int main(){
    Animal Tiger("Teg",2,1.5);
    cout<<"Tiger age before increament "<<Tiger.getAge()<<endl;
    ++Tiger;
    cout<<"Tiger age after increament "<<Tiger.getAge()<<endl;

    return 0;
}



