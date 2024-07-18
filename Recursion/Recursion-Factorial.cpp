#include <bits/stdc++.h>
using namespace std;

uint32_t factorial(int n){

	// base case
	if(n == 0) return 1;

	// recursive relation

	// fact(n) = n * fact(n-1)
	uint32_t smallerProblem = factorial(n-1);
	uint32_t biggerProblem = n * smallerProblem;

	return biggerProblem;

	// return n * factorial(n-1);
}

int32_t main(){
    
    uint16_t n;
    cin >> n;

    cout << "Number is : " << n << endl;

    uint32_t fact = factorial(n);
    cout << "Factorial: " << fact << endl;
}