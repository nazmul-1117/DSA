#include <bits/stdc++.h>
#define lld long long int

using namespace std;

void swapBetweenTwoNumbers(int* arr, int& n){

	for(int i=1; i<n; i+=2){
		swap(arr[i-1], i[arr]);
	}
}


void displayArray(const int* arr, const int& n){
	for(int i=0; i<n; i++){
		cout << i[arr] <<" ";
	}
	cout << endl;
}

int32_t main(){
    
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; ++i){
    	cin >> *(i+arr);
    }

    cout << "Before Swap: ";
    displayArray(arr, n);

    swapBetweenTwoNumbers(arr, n);

    cout << "After Swap: ";
    displayArray(arr, n);

    delete[] arr;  
}