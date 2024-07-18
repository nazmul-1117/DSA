#include <bits/stdc++.h>
using namespace std;

int32_t power(int n){

    // base case
    if(n == 0) return 1;


    // recursive relation

    // pow = 2 * 2^(n-1);
    int smallerProblem = power(n-1);
    int biggerProblem = 2 * smallerProblem;

    return biggerProblem;

    // return 2 * power(n-1);
}

int32_t main(){
    
    int16_t n=0;
    cin >> n;

    int32_t ans = power(n);
    cout << "2^" << n <<" = " << ans << endl;

}