#include<iostream>
using namespace std;

template<typename R, typename T>
R add(T x, T y){
    cout<<x+y<<endl;
    return x+y;
}
template<> //spectialization 
string add(string x, string y){
    cout<<"this is string concatenation\n";
    cout<<x+y<<endl;
    return x+y;
}
int main(){
    float result = 0;
    int in1=5,in2=2;

    result = add<float>(in1,in2); 

    string x="good",y="night",out="";
    out = add<string>(x,y);

    return 0;
}

