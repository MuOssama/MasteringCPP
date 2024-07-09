#include<iostream>
using namespace std;
#define valid true
#define print(name, age, id) do{cout<<"my name is "<< name<<endl; \
                             cout<<"I've "<< age<<" yrs old "<<endl; \
                             cout<<"my ID is "<< id;\
                            }while(0)
int main(){
    if(valid)
            print("Ahmed", 19, 202014);
    else
        cout<<"not valid";
    
    return 0;
}