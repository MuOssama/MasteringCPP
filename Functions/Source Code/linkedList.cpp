#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
int main(){
  //create the head
  Node* head = new Node;
   
   //create 1st node
   Node* newNode = new Node;
   cout<<"enter the data of the first node ";
   cin>>newNode->data;
   newNode->next = NULL;
   //link the new node to the head
   head->next = newNode;
   
   //create 2nd node
   Node* newNode2 = new Node;
   cout<<"enter the data of the second node ";
   cin>>newNode2->data;
   newNode2->next = NULL;  
   
   (head->next)->next = newNode2;
   
   //create 3nd node
   Node* newNode3 = new Node;
   cout<<"enter the data of the third node ";
   cin>>newNode3->data;
   newNode3->next = NULL;  
   
   ((head->next)->next)->next = newNode3;
   
   
   //printing the linked list
   Node* itr = head->next;
   while(itr != NULL){
   cout<<itr->data<<endl;
   itr=itr->next;   
   }
   
   //deletion of 2nd node
   //1- iterate to previous node of 2nd node which is 1st node
   itr = head;
   for(int i=0;i<1;i++){
       itr=itr->next; //we 1st node
   }
   //2- (unlink 2nd node) replace 1st node address by the 3rd node instead of 2nd node
   Node* temp = itr->next; //save 2nd node before unlinking 
   itr->next = (itr->next)->next; //pointer to pointer (address of 3rd node)
   //3-delete the 2nd node 
   delete temp;
   
   //printing the linked list
   cout<<"after deletion of 2nd node"<<endl;
   itr = head->next;
   while(itr != NULL){
   cout<<itr->data<<endl;
   itr=itr->next;   
   }
}