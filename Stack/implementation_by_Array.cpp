//Stack implementation by Using Dynamic Array

#include <bits/stdc++.h>
using namespace std;

class Stack{
  
  public:
    int size;   //max size of array
    int top;    //peek value
    int *arr;   //dynamics array create in heap
        
        Stack(){}
        Stack(int size){
            this -> size = size;
            this -> arr = new int[this -> size];    //dynamic array create
            this -> top = -1;   //our peek value's initial index 
        }
};

Stack *stack1 = new Stack(5);   //globally dynamic array create


int isEmpty(void){
    if(stack1 -> top < 0){
        return 1;
    }
    return 0;
}

int isFull(void){
    if(stack1 -> top >= stack1 -> size){
        return 1;
    }
    return 0;
}

void push_back(int data){
    
    if(stack1 -> top >= stack1 -> size){
        cout<<"Stack Overflow!!!"<<endl;
        return ;
    }
    
    (stack1 -> top)++;
    (stack1 -> arr[stack1 -> top]) = data;
}

int pop_back(void){
     int pop = 0;
     
    if(isEmpty()){
        cout<<"Stack is Underflow!!!"<<endl;
    }
    
    else{
        pop = (stack1 -> arr[stack1 -> top]);
        stack1 -> arr[stack1 -> top] = 0;
        (stack1 -> top)--;
    }
    return pop;
}

void displayData(void){
    
    int top = stack1 -> top;
    if(isEmpty()){
        cout<<"Stack is Empty!!!"<<endl;
        return ;
    }
    
    for(int i=0; i<=top; i++){
        cout<<stack1 -> arr[i]<<" ";
    }
    
    cout<<endl;
}

int main(){
    
    int top2 = stack1 -> top;
    
    int data = 0;
    
    cout<<"Push_Back: ";
    {
        push_back(5);
        push_back(6);
        push_back(7);
        push_back(8);
        push_back(9);
        push_back(10);
    }
    displayData();
    
    cout<<"Pop_Back: ";
    {
        cout<<pop_back()<<" ";
        cout<<pop_back()<<" ";
        cout<<pop_back()<<" ";
        cout<<pop_back()<<" ";
        cout<<pop_back()<<" ";
        cout<<pop_back()<<" ";
    }
    cout<<endl;
    cout<<"Data: ";
    displayData();
    
    cout<<"Top: "<<stack1 -> top<<endl;
    
    
    delete[] (stack1 -> arr);
    return 0;
}
