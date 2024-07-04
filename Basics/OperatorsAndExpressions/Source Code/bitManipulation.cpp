#include<stdio.h>
using namespace std;

struct Register{
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
    }reg;
    
    
    void setBit(int index){
        reg.byte |= (1<<index);
    }
    void clrBit(int index){
        reg.byte &=~ (1<<index);
    }
    void togBit(int index){
        reg.byte ^= (1<<index);
    }
    int getBit(int index){
        return (reg.byte>>index) & 1;
    }
};
int main(){
    Register DDRA;
    DDRA.reg.byte = 0;
    DDRA.setBit(0); //setting bit number 0
    DDRA.setBit(1); //setting bit number 0

    printf("bit number 0 is %d\n",DDRA.getBit(0));
    printf("bit number 1 is %d\n",DDRA.getBit(1));
    printf("bit number 2 is %d\n",DDRA.getBit(2));

}