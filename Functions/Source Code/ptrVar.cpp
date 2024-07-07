#include<iostream>
using namespace std;

int main(){
 char x = 'a';
 short y = 15;
 char* ptr_x = &x;
 short* ptr_y = &y;
  //derefrence operator * to access or modifiy variables
 cout<<"x has: "<<*ptr_x<<" while y has: "<<*ptr_y<<endl;
 cout<<"x is stored in : "<<(void*)ptr_x<<" while y is stored in: "<<ptr_y<<" Addresses"<<endl;

 *ptr_x = 'b';
 *ptr_y = 66;;
  cout<<"After Modifiynig\nx has: "<<*ptr_x<<" while y has: "<<*ptr_y<<endl;
  cout<<"x is stored in : "<<(void*)ptr_x<<" while y is stored in: "<<ptr_y<<" Addresses"<<endl;
  }