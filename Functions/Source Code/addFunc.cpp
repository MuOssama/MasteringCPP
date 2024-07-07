#include<iostream>
using namespace std;

long int add(int x, int y); //function Declaration
int main(){
    float a,b;
    long int sum = 0;
    cout<<"enter the two addition operands :";
    cin>>a>>b;
    sum = add(a,b);
    cout<<"\n the sum is "<<sum;
}
long int add(int x, int y){ //function Definition
    return x + y;
}
