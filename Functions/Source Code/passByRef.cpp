#include<iostream>
using namespace std;

int add(int a, int b, int &sum){
    sum = a+b;
    return sum;
}

int main(){
    int x=5 ,y=6, product=0;
    //pass by refrence
    cout<<"the addition is :" <<add(x,y, product)<<" the product var is "<<product;
}