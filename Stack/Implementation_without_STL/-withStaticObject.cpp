//implement Stack using Dyanmic Array and Static Object;

#include <iostream>
using namespace std;

class Stack{
    public:
        //properties
            int size;
            int* container;
            int top;
            
        //behavior
            Stack(){}
            Stack(int value){
                this -> size = value;
                this -> container = new int[this -> size];
                this -> top = -1;
            }
            
            bool isEmpty(){
                if(top < 0){
                    return true;
                }
                return false;
            }
            
            int peek(){
                if(!isEmpty()){
                    return container[top];
                }
                return -1;
            }
            
            void push(int data){
                if(size - top > 1){
                    top++;
                    container[top] = data;
                    return;
                }
                cout<<"Stack Overflow!!!"<<endl;
            }
            
            void pop(){
                if(top >= 0){
                    container[top] = 0;
                    top--;
                    return ;
                }
                cout<<"Stack Unedrflow!!!"<<endl;
            }
};

int main()
{
    Stack st(5);
    
    {
        st.push(5);
        st.push(6);
        st.push(7);
        st.push(8);
        st.push(9);
        st.push(17);
    }
    
    
    while(!st.isEmpty()){
        cout<<st.peek()<<" ";
        st.pop();
    }
    cout<<endl;
    st.pop();
    
    
    delete[] st.container;
    
    return 0;
}
