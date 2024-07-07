#include<iostream>
using namespace std;

double add(int x, int y); //function Declaration
double add(float x, float y); //function Declaration

int main(){
    float a,b;
    double sum = 0;
    cout<<"enter the two addition operands :";
    cin>>a>>b;
    sum = add(a,b);
    cout<<"\n the sum is "<<sum;
}
double add(int x, int y){ //function Definition
    return x + y;
}
double add(float x, float y){ //function Declaration
    return x + y;
}
