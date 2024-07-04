#include <iostream>
#include<array>
using namespace std;

int main(){
    array<char,5> vowels = {'a','e','u','i','o'}; //this differs from c arrays (vowels[])
    for(char x: vowels)
    {cout<<x<<" is vowel"<<endl;}

}