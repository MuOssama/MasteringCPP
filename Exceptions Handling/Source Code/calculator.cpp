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
        case '/': cout<<"\nDivsion = "<<
                try{
                cout<<num1/num2;
                throw "Zero division";
                }
                catch(string error)
                {cout<<error}
                ;break;
        case '%': cout<<"\Modulo = "<<
                try{
                cout<<num1/num2;
                throw "Modulo: Zero division";
                }
                catch(string error)
                {cout<<error}
                ;break;
    }
}