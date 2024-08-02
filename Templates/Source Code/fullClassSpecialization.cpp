#include<iostream>
using namespace std;
template<typename T, typename U>
class Animal{
    T name;
    U age;
   public:
   //constructor
   Animal(){cout<<"datatypes: all\n";}
   //geters and setters for encapsulation 
   T getName(){return name;}
   U getAge(){return age;}
   void setName(T n){name = n;}
   void setAge(U a){age = a;}

};
//full spectialization when T is string and U is float
template<>
class Animal<string, float>{
    string name;
    float age;
   public:
   //constructor
   Animal(){cout<<"datatypes: string and float\n";}
   //geters and setters for encapsulation 
   string getName(){return name;}
   float getAge(){return age;}
   void setName(string n){name = n;}
   void setAge(float a){age = a;}

};
int main(){
    Animal<string, float> Tiger; 
    Animal<int, int> Lion;
}