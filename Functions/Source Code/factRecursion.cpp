#include<iostream>
using namespace std;

int fact(int num);

int main(){
    int n;
    cin>>n;
    cout<<"the answer is: "<<fact(n);
}

int fact(int num){
   //base case
   if(num==1)
    return 1;
   else{
       return num*fact(num-1);
   }
}
