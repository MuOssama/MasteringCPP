#include<iostream>
using namespace std;


struct AnimalStruct{
    //parent struct 
    int age;
};

struct TigerStruct: AnimalStruct{ 
    //child struct  
    int speed;
};

class AnimalClass{
    //parent class 
    int age;
};

class TigerClass:  AnimalClass{ 
    //child struct  
    int speed;
};

int main(){
    TigerClass tiger;
    TigerStruct tigress;
    
    tigress.age = 15; //tigress inherts age as public 
    //tiger error its private inhertance, so age becomes private for the child
    tiger.age = 15; 
    
    return 0;
}