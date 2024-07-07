#include<iostream>
#include<memory>
using namespace std;

int main(){
    unique_ptr<int> ptr1(new int(15)); //make unique ptr to var init with 15
    //or use unique_ptr<int> ptr1 = make_unique<int>(); 
    
    unique_ptr<int[]> ptrArr(new int[10]); //allocate array via unique pointer
    //filling the array
    for(int i=0;i<10;i++){
    cout<<"enter element "<<i<<" "<<endl;
    cin>>*(ptrArr.get()+i); //or ptrArr[i]
    //note to get the address of unique pointer, use .get() method
    }  
    
    //printing the single value
    cout<<"unique single var is :"<<*ptr1<<endl;
    
    //printing the array
    for(int i=0;i<10;i++){
    cout<<"unique array var is, element number : "<<i<<" "<<ptrArr[i]<<endl;
    }

  }