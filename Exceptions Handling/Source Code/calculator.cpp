#include<iostream>
using namespace std;
int main(){
    int num1=0,num2=1;
    char op=' ';
    cout<<"enter the 2 operands resp. "<<endl;
    cin>>num1>>num2;
    cout<<"\nenter the operation ";
    cin>>op;
    switch(op){
        case '+': cout<<"\nSum = "<<num1+num2;break;
        case '-': cout<<"\nSubs = "<<num1-num2;break;
        case '*': cout<<"\nMult = "<<num1*num2;break;
        case '/': 
                try{
                    if(num2==0)throw "Zero division";
                    else{ cout<<"\nDivsion = "<< num1/num2;}
                 }
                catch(char const* error)
                {cout<<error<<endl;}
                ;
               
                break;
        default: cout<<"wrong input\n";
    }
    cout<<"\nThank you";
}