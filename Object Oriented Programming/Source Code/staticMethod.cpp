#include<iostream>
using namespace std;

class Animal{
    private:
    string name;
    int age;
    float length;
    
    public:
    //static memver indicating for animals count
    static int animalCount;
    // Static member function to get animal count
    static int getAnimalCount() {
    cout<<"The zoo has "<<animalCount<<" animals\n"; 
        return animalCount;
    }
    //constructor
    Animal(string s, int a, float l):name(s),age(a),length(l){
        cout<<"Animal: "<<s<<" come\n";
        animalCount++;
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

// static member variables need to be declared inside
// the class definition and then defined outside of it
int Animal::animalCount = 0;
int main(){
    //calling static method getAnimalCount() without any object made !
    Animal::getAnimalCount();
    Animal Tiger("teg", 2, 2.5);
    Animal::getAnimalCount();
    Animal Lion("leo",1,2);
    Animal::getAnimalCount();
    Animal Bird("fly", 1, 0.2);
    Animal::getAnimalCount();
    return 0;
}



