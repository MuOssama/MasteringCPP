#include<iostream>
using namespace std;

// you have to options: 
// 0 for circle 
// 1 for square
#define circle 0
#define square 1

#define shape square

int main(){
    #if shape == circle
        float pi = 3.14,raduis=0;
        cout<<"enter the radius ";
        cin>>raduis;
        cout<<"\nArea of cricle is "<<pi*raduis*raduis;
    #elif shape == square
        float len=0;
        cout<<"enter the length ";
        cin>>len;
        cout<<"\nArea of square is "<<len*len; 
    #endif
    return 0;
}