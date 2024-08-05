#include<iostream>
#include<fstream>
#include <vector>
#include <sstream>
#include <cstdlib>
using namespace std;

vector<string> splitString(const string& str, char delimiter) {
    vector<string> result;
    stringstream ss(str);
    string token;

    while (getline(ss, token, delimiter)) {
        result.push_back(token);
    }

    return result;
}
int main(){
    //read and write a file
    fstream file("files/file2.txt",ios::in);
    try{

        if(file.is_open()){
            string line;
            long int salarySum = 0;
            while(getline(file, line)){
                char* end;
                vector<string> data = splitString(line, ' ');
                salarySum += strtol(data[1].c_str(), &end, 10);
                cout<<"emp salary: "<<strtol(data[1].c_str(), &end, 10)<<endl;
                }
            cout<<"Total salaries: "<<salarySum<<endl;
          }
        else{
            throw "file not opened"; 
        }
       }
    catch(...){cout<<"file not opened";}
    file.close();
}