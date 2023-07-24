//Double Linked List Insertion;

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    
    Node* previousNode;
    int data;
    Node* nextNode;
    
        Node(){}
        Node(int data){
            
            this -> previousNode = NULL;
            this -> data = data;
            this -> nextNode = NULL;
        }
        
        
};

void displayData(Node* head){
    Node* temp = head;
    
    while(temp != NULL){
        cout<<temp -> data<<"->";
        temp = temp -> nextNode;
    }
    cout<<endl;
}

void linkedListLength(Node* head, int& length){
    Node* temp = head;
    
    length = 0;
    cout<<"List: ";
    while(temp != NULL){
        cout<<temp -> data<<" -> ";
        temp = temp -> nextNode;
        length++;
    }
    cout<<endl;
}

void insertAtHead(Node* &head, int &data){
    Node* temp = new Node(data);
    temp -> nextNode = head;
    head -> previousNode = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int &data){
    
    Node* temp = new Node(data);
    
    temp -> previousNode = tail;
    tail -> nextNode = temp;
    
    tail = temp;
    
}

void insertAtPosition(Node* &head, Node* &tail, int& position, int& data){
    if(position==1){
        insertAtHead(head, data);
        return  ;
    }
    
    Node* temp = head;
    
    int count = 1;
    while(count < position-1){
        temp = temp -> nextNode;
        count++;
    }
    
    if(temp -> nextNode == NULL){
        insertAtTail(tail, data);
        return ;
    }
    
    Node* newNode = new Node(data);
    
    newNode -> nextNode = temp -> nextNode;
    temp -> nextNode = newNode;
    newNode -> previousNode = temp;
    newNode -> nextNode -> previousNode = newNode;
    
}

int main()
{
    int length = 0, data = 0, position = 0;
    Node* node1 = new Node(225);
    
    Node* head = NULL;
    Node* tail = NULL;
    
    head = node1;
    tail = node1;
    
    {   //inset at head
    
        data = 252;
        insertAtHead(head, data);
        
        data = 2;
        insertAtHead(head, data);
    }
    
   
    {   //insert at tail
    
        data = 125;
        insertAtTail(tail,  data);
        
        data = 15;
        insertAtTail(tail,  data);
        
        data = 1598;
        insertAtTail(tail,  data);
    }
    
    {   //insert at any position
    
        position = 1, data = 32;
        insertAtPosition(head, tail, position, data);
        
        position = 2, data = 456;
        insertAtPosition(head, tail, position, data);
        
        position = 9, data = 2252;
        insertAtPosition(head, tail, position, data);
        
    }
    
    linkedListLength(head, length);
    
    {
        cout<<"Head: "<<head->data<<endl;
        cout<<"Tail: "<<tail->data<<endl;
    }
   

    return 0;
}
