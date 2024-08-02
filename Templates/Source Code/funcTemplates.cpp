#include<stdio.h>
using namespace std;

template<typename R, typename T>
 
R add(T x, T y){
    return x+y;
}

int main(){
    float result = 0;
    int in1=5,in2=2;
    //we must determine the return as float
    //as compiler cannot deduce by itself   
    result = add<float>(in1,in2); 
    printf("%f\n", result); //output is float 7.000
    double l=2.2, m=4.8;
    
    result = add<float>(l,m);
    printf("%f\n", result); //output is float 7.000
    return 0;
}


