#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file1("files/file1.txt",ios::in);
    try{

        if(file1.is_open()){
            string line;
            while(getline(file1, line)){
                cout<<line<<endl;}
          }
        else{
            throw "file not opened"; 
        }
       }
    catch(...){cout<<"file not opened";}
    file1.close();
}