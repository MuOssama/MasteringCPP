#include<iostream>
using namespace std;

int pwr(int base, int pow_num);

int main(){
    int base, power;
    cout<<"enter base and power resp. ";
    cin>>base>>power;    
    cout<<"the answer is: "<<pwr(base,power);
}

int pwr(int base, int pow_num){
    //base case
   if(pow_num==0)
    return 1;
   else{
       return base*pwr(base,pow_num-1);
   }
}
