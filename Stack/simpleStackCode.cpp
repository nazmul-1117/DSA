//first Stack Code in STL

#include <bits/stdc++.h>
using namespace std;

    //  st.push();
    //  st.pop();
    //  st.size();
    //  st.top();
    //  st.empty();

int main(){
    stack<int> st;
    
    {   //stack push
    
        st.push(5);
        st.push(6);
        st.push(7);
        st.push(8);
        st.push(9);
        st.push(10);
    }
    cout<<"Size: "<<st.size()<<endl;
    cout<<"Top: "<<st.top()<<endl;
    
    {   //stack pop
    
        st.pop();
        st.pop();
    }
    cout<<"Size: "<<st.size()<<endl;
    cout<<"Top: "<<st.top()<<endl;
    
    cout<<"Your Stack is: ";
    while( !st.empty() ){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
