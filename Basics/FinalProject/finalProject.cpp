#include<iostream>
#include<string>
#include<array>
using namespace std;

#define usersNumber 100
int userItr = 0;

struct User{
  std::string name;
  int age;
   void AddRecord(const string& n, int a){
       name = n;
       age = a;
       userItr++;
   }  
   void FetchRecord(int id){
        cout<<"Name: "<<name<<"\nId: "<<age<<endl;
   }
};
enum Menu{
    add_record=1,fetch_record,quit
};
int main(){
    bool Quit = false;
    int option = 0; 
    int id = 0;

   //creating list of struct member user
   array<User,usersNumber> users;
   
   while(!Quit){
       cout<<"Please select an option:\n";
       cout<<"1- Add Record\n";
       cout<<"2- Fetch Record\n";
       cout<<"3- Quit\n\n";
       
       //get user choise
       cin>>option;
       
       switch(option){
           case add_record:{string name; int age;
                           cout<<"Add user, Please enter name and age\n"; cin>>name>>age;
                           users[userItr].AddRecord(name,age);
                           break;}
           case fetch_record:{cout<<"Fetch user, Please enter id from 0 to 99\n";
                             cin>>id;
                             users[id].FetchRecord(id);
                             break;}
           case quit: cout<<"Quit !"<<endl;
                      Quit =true; break;
           default: cout<<"enter value from 1 to 3"<<endl;      
       }
   }
   
}