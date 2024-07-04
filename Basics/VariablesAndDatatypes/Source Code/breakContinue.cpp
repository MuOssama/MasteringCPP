#include <iostream>
using namespace std;

int main(){
   for(int itr=0; itr<=10; itr++){
       if(itr==6)
       continue;
   
       else{cout<<"continue loop: "<<itr<<endl;}
   }
   for(int itr=0; itr<=10; itr++){
       if(itr==6)
       break;
   
      else{cout<<"break loop: "<<itr<<endl;}
   }
}
