#include<iostream>
#include<memory>
using namespace std;

int main(){
    shared_ptr<int> ptr1(new int(15)); //make unique ptr to var init with 15
    //or use unique_ptr<int> ptr1 = make_shared<int>(); 
    
    shared_ptr<int> ptr2 = ptr1;
    
    cout<<"first shared ptr to single var is :"<<*ptr1<<endl;
    cout<<"second shared ptr to single var is :"<<*ptr2<<endl;

    cout<<"there are "<<ptr1.use_count()<<" shared pointer";
  }