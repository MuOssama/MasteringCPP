#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int, 5>salaries;
    //filling the array
    for(int i=0;i<salaries.size();i++){
        cout<<"enter the "<<i<<" element:";
        cin>>salaries[i];
        cout<<"\n";
    }
    //printing the array
    for(int i=0;i<salaries.size();i++){
        cout<<"the element "<<i<<" is: "<<salaries[i]<<"\n";
    }
}