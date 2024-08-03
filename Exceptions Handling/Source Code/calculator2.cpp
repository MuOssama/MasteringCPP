#include<iostream>
using namespace std;
int main(){
    int num1=0,num2=0;
    char op=' ';
    cout<<"enter the 2 operands resp. "<<endl;
    cin>>num1>>num2;
    cout<<"\nenter the operation ";
    cin>>op;
    
    try{
        if(cin.fail()){throw "bad inputs";}
        else if (num2==0 && op =='/'){throw 0;}

        switch(op){
            case '+': cout<<"\nSum = "<<num1+num2;break;
            case '-': cout<<"\nSubs = "<<num1-num2;break;
            case '*': cout<<"\nMult = "<<num1*num2;break;
            case '/': cout<<"\nDivsion = "<< num1/num2;break;
            default: cout<<"wrong input\n";
        }
    }
    catch(int error){cout<<"error type "<<error<<endl;}
    catch(...){cout<<"error type "<<"bad entry"<<endl;} //default catch

    cout<<"\nThank you";
}