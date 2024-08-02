#include<iostream>
using namespace std;
template<typename T, typename U>
class Animal{
    T name;
    U age;
   public:
   //constructor
   Animal(){name = 0;cout<<"name not a string\n";}
   //geters and setters for encapsulation 
   T getName(){return name;}
   U getAge(){return age;}
   void setName(T n){name = n;}
   void setAge(U a){age = a;}

};
//partial spectialization when T is string and U is float
template<typename U>
class Animal<string, U>{
    string name;
    U age;
   public:
   //constructor
   Animal(){cout<<"name is string\n";}
   //geters and setters for encapsulation 
   string getName(){return name;}
   U getAge(){return age;}
   void setName(string n){name = n;}
   void setAge(U a){age = a;}

};
int main(){
    Animal<string, float> Tiger; 
    Animal<int, int> Lion;
}