#include<iostream>
using namespace std;

float calc_area(int length, string shape = "circle");
int main(){
    double len, area=0;
    string choice;
    cout<<"do you want to calculate area of circle or square?" ;
    cin>>choice;
    cout<<"\nplease enter the length (side or radius) :";
    cin>>len;

    area = calc_area(len, choice);
 
}

float calc_area(int length, string shape){
    if(shape == "circle"){
        double pi = 3.14159265359;
        cout<<"\nthe area of circle is: "<<pi*length;
        return pi*length;
    }
    else if(shape == "square"){
        cout<<"\nthe area of square is: "<<length*length;
        return length*length;
    }
    else{
        cout<<"\nshape must be 'circle' or 'square'"<<endl;
        return 0;
    }
}
