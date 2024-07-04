#include <iostream>
using namespace std;

int main(){
   int x =0,sum=0, cont=0;
   cout<<"enter a number ";
   cin>>x; 
   cont = x;
   
   do{
       sum += x%10;
       x= x/10;
    }
   while(x > 0);

   cout<<"the sum of "<<cont<<" is: "<< sum;
}
