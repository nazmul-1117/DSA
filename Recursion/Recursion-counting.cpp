#include <bits/stdc++.h>
using namespace std;

void forwordCountingPrint(uint16_t n){

    // base case
    if(n == 0) return ;

    // recursive relation
    forwordCountingPrint(n-1);
    cout << n << " ";
}

void reverseCountingPrint(uint16_t n){

    // base case
    if(n == 0) return ;

    // recursive relation
    cout << n << " ";
    reverseCountingPrint(n-1);
}

int32_t main(){
    
    uint16_t n;
    cin >> n;

    cout << "Backword Printing: ";
    reverseCountingPrint(n);

    cout << "Forword Printing: ";
    forwordCountingPrint(n);

}