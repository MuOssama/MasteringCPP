#include<iostream>
using namespace std;

void swapping(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main(){
    int x=5 ,y=6;
    //pass by pointer
    cout<<"Before swapping:\nx is:" <<x<<"\ny is:"<<y<<endl;
    //swap
    swapping(&x,&y); 
    /*dont forget in pass by pointer
    to add in reference operator in call*/
    cout<<"After swapping:\nx is:" <<x<<"\ny is:"<<y<<endl;
}