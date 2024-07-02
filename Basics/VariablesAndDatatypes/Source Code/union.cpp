#include<iostream>
using namespace std;

union storage{
    unsigned char x;
    unsigned short y;
};

int main(){
    storage var;
    var.x = 1;
    var.y = 65535;
    cout<<"size of var is: "<<sizeof(var)<<endl;
    cout<<"x y resp: "<<(unsigned short)var.x<<" "<<var.y<<endl;
    var.x = 2;
    cout<<"x y resp: "<<(unsigned short)var.x<<" "<<var.y<<endl;
}