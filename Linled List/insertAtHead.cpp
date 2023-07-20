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

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    
    temp -> nextNode = head;
    head = temp;
}

void printData(Node* &head){
    if(head -> nextNode == NULL){
        cout<<"Invalid Node";
    }
    
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" -> ";
        temp = temp -> nextNode;
    }
    cout<<"NULL"<<endl;
}


int main()
{
    Node* node1;
    node1 = new Node(5);
    
    Node* head;
    head = node1;
    printData(head);
    
    {
        insertAtHead(head, 10);
        printData(head);
        
        insertAtHead(head, 15);
        printData(head);
        
        insertAtHead(head, 20);
        printData(head);
    }
    
    return 0;
}

