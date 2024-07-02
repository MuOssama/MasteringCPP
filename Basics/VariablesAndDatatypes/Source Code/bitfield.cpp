#include<stdio.h>
using namespace std;

union Reg{
    struct{
        unsigned char B0:1;
        unsigned char B1:1;
        unsigned char B2:1;
        unsigned char B3:1;
        unsigned char B4:1;
        unsigned char B5:1;
        unsigned char B6:1;
        unsigned char B7:1;
    }Bits;
    unsigned char byte;
};

int main(){
    Reg DDRA;
    DDRA.Bits.B0=1;
    DDRA.Bits.B1=1;
    DDRA.Bits.B2=1;
    DDRA.Bits.B3=0;
    DDRA.Bits.B4=0;
    DDRA.Bits.B5=0;
    DDRA.Bits.B6=0;
    DDRA.Bits.B7=0;
    printf("%d",DDRA.byte);
}