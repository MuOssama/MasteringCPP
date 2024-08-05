#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file1("files/file1.txt",ios::app);
    try{

        if(file1.is_open()){
            file1<<"\nthank you";
          }
        else{
            throw "file not opened"; 
        }
       }
    catch(...){cout<<"file not opened";}
    file1.close();
}