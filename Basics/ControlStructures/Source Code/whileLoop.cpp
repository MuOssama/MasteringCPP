#include <iostream>
using namespace std;

int main(){
   int x =0,sum=0, cont=0;
   cout<<"enter a number ";
   cin>>x; 
   cont = x;
   
   while(x/10 > 0){
       sum += x%10;
       x= x/10;
   }
   sum += x; //adding the most left number
   cout<<"the sum of "<<cont<<" is: "<< sum;
}
