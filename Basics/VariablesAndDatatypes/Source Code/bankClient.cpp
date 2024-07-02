#include <iostream>
using namespace std;

int main() {
    string clientName;
    float depMoney;
    int ID;
    cout<<"enter your name"<<endl;
    cin>>clientName;
    cout<<"enter your ID "<<endl;
    cin>>ID;
    cout<<"enter money to deposit"<<endl;
    cin>>depMoney;
    
    cout<<"Introduction\nMy name is:"<<clientName<<endl;
    cout<<"My ID is: "<<ID<<" I want to deposit "<<depMoney<<" LE";
    return 0;
}