//insert Linked List Data  any Position;

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

void insertAtHead(Node* &head, int &data){
    Node* temp = new Node(data);
    temp -> nextNode = head;
    head = temp;
}

void insertAtTail(Node* &tail, int &data){
    Node* temp = new Node(data);
    tail -> nextNode = temp;
    tail = temp;
}

void insertAtAnyPosition(Node* &head, Node* &tail, int& position, int& data){
    
    int count=1;
    
    if(position == 1){
        insertAtHead(head, data);
        return ;
    }
    
    Node* temp = head;
    
    while(count < position-1){
        temp = temp -> nextNode;
        count++;
    }
    
    if(temp -> nextNode == NULL){
        insertAtTail(tail, data);
        return ;
    }
    
    Node* insertNewNode = new Node(data);
    
    insertNewNode -> nextNode = temp -> nextNode;
    temp -> nextNode = insertNewNode;
    
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
   
    {   //insert At Head
    
        data = 40;
        insertAtHead(head, data);
        
        data = 30;
        insertAtHead(head, data);
        
        data = 20;
        insertAtHead(head, data);
        
        data = 1250;
        insertAtHead(head, data);
    }
    
    {   //insert At Tail
    
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
    
    int position=0;
    
    {   //insert At any position;
    
        position = 11, data = 2500;
        insertAtAnyPosition(head, tail, position, data);
        
        position = 1, data = 256;
        insertAtAnyPosition(head, tail, position, data);
        
        position = 7, data = 379;
        insertAtAnyPosition(head, tail, position, data);
    }
     displayData(head);
     
    {   //print head and tail;
        
        cout<<"Head: "<<head -> data<<endl;
        cout<<"Tail: "<<tail -> data<<endl;
    }

    return 0;
}
