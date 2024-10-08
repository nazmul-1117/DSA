// fibonacci using recursion  and for loop

#include <iostream>
using namespace std;

uint fibRec(uint n){
    if(n == 0 || n == 1){
        return n;
    }
    
    uint ans = fibRec(n-1) + fibRec(n-2);
    return ans;
}

uint fibFor(uint n){
    uint a = 0;
    uint b = 1;
    
    for(int i=2; i<=n; i++){
        uint temp = a+b;
        a = b;
        b = temp;
    }
    return b;
}

int32_t main(){
    
    uint n = 150;
    
    uint x = fibRec(n);
    cout <<"Fibonacci using Recursion: " << x << endl;
    
    x = fibFor(n);
    cout << "Fibonacci using For Loop: " << x << endl;
    

    return 0;
}
