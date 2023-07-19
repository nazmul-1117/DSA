#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *nextNode;
    
    Node(){}
    Node(int x){
        data = x;
        nextNode = NULL;
    }
    
    void insertNode(Node *head){
     this->nextNode = head;
    }   
    
};



int main()
{
   Node *a;
   Node *b;
   Node *c;
   a = new Node(5);
   b = new Node(10);
   a->nextNode = b;
   c = new Node(15);
   b->nextNode = c;
   Node *matha = a;
   
   
   Node *d;
   for(int i = 0;i<10;i++){
       d = new Node(i);
       d->insertNode(matha);
       matha = d;
   }
   
    Node* e = new Node(900);
    e->insertNode(matha);
     matha = e;
     
     Node* f;
     f = new Node(700);
     
     Node *last=matha;
     while(last != NULL){
       last = last->nextNode;
   }
   
   last = f;
    //cout<<e->nextNode<<"->";

   while(matha != NULL){
       cout<<matha->data<<" -> ";
       matha = matha->nextNode;
   }

    return 0;
}
