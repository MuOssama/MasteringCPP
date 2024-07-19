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
};

class Tiger: public Animal{
    public:
    Tiger(string s, int a, float l):Animal(s,a,l){
    }
};

int main(){
    Tiger teg(" ",0,0.0);//init empty
    teg.setName("teg");
    teg.setAge(2);
    teg.setLength(1.5);
    cout<<"Tiger '"<<teg.getName()<<"' has "<<teg.getAge()<<" yr(s) and "<<teg.getLength()<<" in length\n";
    return 0;
}



