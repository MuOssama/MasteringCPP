#include<iostream>
using namespace std;

int main(){
    int var1 = 5, var2 = 6;
    cout<<"The var1 is bigger than  var2 AND var1 is odd:  "<<((var2>var1)&&(var1%2 == 0))<<endl;
    cout<<"The var1 is bigger than  var2 OR var1 is odd:  "<<((var2>var1)||(var1%2 == 0))<<endl;
    cout<<"The var1 is bigger than  var2 AND var1 is not odd:  "<<((var2>var1) && (var1%2 != 0))<<endl;
    return 0;
}