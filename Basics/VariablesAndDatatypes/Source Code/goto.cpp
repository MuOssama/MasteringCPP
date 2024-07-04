#include <iostream>
using namespace std;

int main(){
   int itr = 30;
   
   a: 
   if(itr%2 ==0){
       cout<<"the number "<<itr<<" is even\n"; 
   }
  
   itr++;
   if(itr<=40)
   goto a;
}
