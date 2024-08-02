#include<iostream>
using namespace std;
template<typename T, typename U>
class Animal{
    T name;
    U age;
   public:
   //geters and setters for encapsulation 
   T getName(){return name;}
   U getAge(){return age;}
   void setName(T n){name = n;}
   void setAge(U a){age = a;}

};

int main(){
    Animal<string, float> Tiger;
    Animal<int, int> Lion;
    Tiger.setAge(1.5);
    cout<<Tiger.getAge()<<endl;
    Lion.setAge(1);
    cout<<Lion.getAge();
}