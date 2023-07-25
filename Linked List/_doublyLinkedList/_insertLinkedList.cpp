//Delete Linked List Note by any Position;

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
        
        ~Node(){
            int data = this -> data;
            while(nextNode != NULL){
                delete nextNode;
                nextNode = NULL;
            }
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


void deleteNode(Node* &head, Node* &tail, int &position){
    
    if(position == 1){
        Node* temp = head;
        head = head -> nextNode;
        
        temp -> nextNode = NULL;
        
        delete temp;
        
        return ;
    }
    
    
    int count = 1;
    
    Node* previous = NULL;
    Node* current = head;
    
    while(count < position){
        previous = current;
        current = current -> nextNode; 
        count++;
    }
    
    
   if(current -> nextNode == NULL){
       tail = previous;
   }
    
    previous -> nextNode = current -> nextNode;
    current -> nextNode = NULL;
    
    delete current;
}

int main()
{
   int data=0, position = 0; 
    
   Node* node1 = NULL;
   node1 = new Node(50);
   
   Node* head;
   head = node1;
   
   Node* tail;
   tail = node1;
   
   
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
    cout<<"List: ";
    displayData(head);
    
    cout<<"After Delete: ";
    {
        
        position = 6;
        deleteNode(head, tail, position);
       
        position = 3;
        deleteNode(head, tail, position);
        
        position = 1;
        deleteNode(head, tail, position);
        
        
    }
    displayData(head);
    
    if(head == NULL){
        cout<<"Emoty";
    }
    
    {   //print head and tail;
        
        cout<<"Head: "<<head -> data<<endl;
        cout<<"Tail: "<<tail -> data<<endl;
    }

    return 0;
}
