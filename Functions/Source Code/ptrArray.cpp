#include<iostream>
#include<array>
using namespace std;
int main(){
  array<int,5> x;
  int* ptr_x = x.data(); //x.data() is used to get the pointer of array x
  //filling array
  for(int i=0;i<x.size();i++){
    int x=0;
    cout<<"\nenter element: "<<i<<" ";
    cin>>*(ptr_x + i); //*(ptr_x + i) == ptr[i]
  }
  //printing array
    for(int i=0;i<x.size();i++){
    cout<<"\nelement "<<i<<" is"<<*(ptr_x + i); //*(ptr_x + i) == ptr[i]
  }
}
