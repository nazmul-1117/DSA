#include <iostream>
using namespace std;

class Queue{
    int queueSize;
    int *arr;
    int front, back;

public:
        Queue(){}
        Queue(int& queueSize){
            this->queueSize = queueSize;
            arr = new int[queueSize];
            front = back = -1;
        }

        bool isEmpty(){
                if(front < 0){
                    return true;
                }
                return false;
        }

        void enqueue(){
            if(queueSize == back){
                cout<<"Queue Overflow..!"<<endl;
                return;
            }

            int data;
            cout<<"Enter a Data: ";
            cin>>data;

            if(front == -1){
                front = 0;
            }
            arr[++back] = data;

            cout<<"--------------------------------------------\n"<<endl;
            cout<<data<<" Data Successfully added into the Queue"<<endl;
            cout<<"--------------------------------------------\n"<<endl;
        }

        void dequeue(){
            if(isEmpty()){
                cout<<"Queue Underflow..!"<<endl;
                return;
            }

            if(front > back){
                front = back = -1;
            }

            cout<<"\n--------------------------------------------\n"<<endl;
            cout<<arr[front]<<" Data Delete from the Queue"<<endl;
            cout<<"--------------------------------------------\n"<<endl;
            arr[front++] = 0;
        }

        int peek(){
            if(isEmpty()){
                cout<<"Queue Underflow..!"<<endl;
                return 0;
            }
            return arr[back];
        }

        void displayData(){
            if(isEmpty()){
                cout<<"Queue Underflow..!"<<endl;
                return ;
            }

            for(int i=front; i <= back; i++){
                cout<<i[arr]<<" ";
            }
            cout<<endl;
        }
};

int main(){
    int queueSize = 5;
    Queue queue(queueSize);

    while(true){
        system("pause");
        system("cls");

        int choice = 0;
        cout<<"***MAIN MENU**\n----------------------\n";
        cout<<"[1] PUSH\n[2] POP\n[3] PEEK\n[4] Empty\n[5] DISPLAY DATA\n[6] EXIT\n----------------------\n";
        cout<<"Enter Your Choice: ";
        cin>>choice;
        cout<<"----------------------\n"<<endl;

        switch(choice){
        case 1:{
            queue.enqueue();
            break;

        }

        case 2:{
            queue.dequeue();
            break;
        }

        case 3:{
            cout<<"Peak Data: "<<queue.peek()<<endl;
            break;
        }

        case 4:{
             if(queue.isEmpty()){
                cout<<"Queue is Empty"<<endl;
            }
            else{
                 cout<<"Queue is Not Empty"<<endl;
            }
            break;
        }

        case 5:{
            queue.displayData();
            break;
        }

        case 6:{
                exit(0);
            }

        default:
                cout<<"Wrong Choice"<<endl;
        }
    }
}
