#include<iostream>
using namespace std;

__attribute__((always_inline))inline float add(float x, float y);
int main(){
    float product;
    float x,y;
    cout<<"enter the 2 operands :";
    cin>>x>>y;
    product = add(x,y);
    cout<<"the addition is: "<<product;

}

__attribute__((always_inline))inline float add(float x, float y)
{

    return x + y;
}
