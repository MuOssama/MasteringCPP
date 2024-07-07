#include<iostream>
using namespace std;

int main(){
  int size = 5;
  int* ptr_arr = new int[size];
  //filling array
  for(int i=0;i<size;i++){
      cout<<"\nenter element :"<<i<<" ";
      cin>>*(ptr_arr+i);
  }
  
 //printing array
  for(int i=0;i<size;i++){
      cout<<"\nenter element "<<i<<" is "<< *(ptr_arr+i);
  }
  
  //delete the array
  delete[] ptr_arr;
  
  //printing array
  for(int i=0;i<size;i++){
      cout<<"\nenter element "<<i<<" is "<< *(ptr_arr+i);
  }
}