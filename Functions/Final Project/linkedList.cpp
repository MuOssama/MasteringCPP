#include <iostream>
using namespace std;

//creating linked list structure
struct Node{
    int DATA;
    Node *NEXT;
};
//function declarations
void Append(Node* &head,int data);
void Insert(Node* &head,int data, int index);
void Delete(Node* &head, int index);
void Print(Node* head);
 

int main() {
    //creating head
    Node* head=nullptr; 
    Append(head, 15);
    Append(head, 42);
    Append(head, 70);
    Insert(head, 61, 2);
    Print(head);
    Delete(head, 2);
    Print(head);
    
    return 0;
}

//function Definitions
void Append(Node* &head,int data){
    cout<<"Appending Node "<<data<<" \n";
    //create the node
    Node* newNode = new Node;
    newNode->DATA = data;
    newNode->NEXT = nullptr;
    //detect if there no node (only head)
    if(head == nullptr){
        head = newNode; 
    }
    else{
        //get the last node
        Node* temp = head;
        while(temp->NEXT != nullptr){
            temp = temp->NEXT;
        }
        temp->NEXT = newNode;
    }
}
void Insert(Node* &head,int data, int index){
    cout<<"Inserting Node "<< data<<" at "<<index<<" \n";
    //move to node before index node
    Node* temp = head;   
    for(int i=0;i<index-1;i++){
        temp = temp->NEXT;
    }
    //crete new node
    Node* newNode = new Node;
    newNode->DATA = data;
    newNode->NEXT = temp->NEXT; //make the new node to point to node index+1
    
    temp->NEXT = newNode ;//name the node at index-1 points to new node
    
    
}
void Delete(Node* &head, int index){
    cout<<"Deleting Node at: "<<index<<endl;
    //move to node before index node
    Node* temp = head;
    for(int i=0;i<index-1;i++){
        temp = temp->NEXT;
    }
    //unlinking:
    //put the address saved in node(index-1) to be address of node(index+1)
    Node* toDelete = temp->NEXT;
    temp->NEXT = (temp->NEXT)->NEXT; 
    //to delete the node ar index 
    delete toDelete; 
}
void Print(Node* head){
    cout<<"Printing Nodes..\n";
    while(head != nullptr){
        cout<<"item: "<<head->DATA<<endl;
        head = head-> NEXT;
    }
}