//Add a New Linked List Node at Tail...

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    
    int data;
    Node* nextNode;
        
        Node(){}
        Node(int data){
            this -> data = data;
            this -> nextNode = NULL;
        }
};

void displayData(Node* &head){
    if(head == NULL){
        return;
    }
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" -> ";
        temp = temp -> nextNode ;
    }
    cout<<endl;
}

void insertAtTail(Node* &tail, int &data){
    Node* temp = new Node(data);
    tail -> nextNode = temp;
    tail = temp;
}


int main()
{
   Node* node1 = NULL;
   node1 = new Node(50);
   
   Node* head;
   head = node1;
   
   Node* tail;
   tail = node1;
   
   int data=0;
    
    {   //insert at Tail
        data = 60;
        insertAtTail(tail, data);
        
        data = 70;
        insertAtTail(tail, data);
        
        data = 80;
        insertAtTail(tail, data);
        
        data = 90;
        insertAtTail(tail, data);
        
        data = 100;
        insertAtTail(tail, data);
    }
    displayData(head);

    return 0;
}
