#include<iostream>
using namespace std;

int main(){
    char x = ' ';
    cout<<"enter a letter: ";
    cin>>x;
    
    switch(x){
        case 'a': cout<<"\n the letter "<<x<<" is Vowel\n";break;
        case 'e': cout<<"\n the letter "<<x<<" is Vowel\n";break;
        case 'i': cout<<"\n the letter "<<x<<" is Vowel\n";break;
        case 'u': cout<<"\n the letter "<<x<<" is Vowel\n";break;
        case 'o': cout<<"\n the letter "<<x<<" is Vowel\n";break;
        default: cout<<"\n the letter "<<x<<" is Consonant\n"; //break at last condition doesnt matter
    }
}