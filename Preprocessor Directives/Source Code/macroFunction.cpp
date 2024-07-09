#include<iostream>
using namespace std;
#define print(name, age, id) cout<<"my name is "<< name<<endl; \
                             cout<<"I've "<< age<<" yrs old "<<endl; \
                             cout<<"my ID is "<< id;
int main(){
    print("Ahmed", 19, 202014)
    return 0;
}