// input:
// 5
// 5 4 3 2 1

// output:
// 5 4 3 2 1 
// 1 2 3 4 5 

// for optimised(already sorted), use swaped variable

#include <bits/stdc++.h>
#define lld long long int

using namespace std;

void printArray(const int* arr, const int& n);

void bubbleSort(int* arr, int& n){

    for (int i = 0; i < n; ++i){
        
        bool swaped = false;
        for(int j=0; j<n-i-1; j++){

            if(arr[j] > arr[j+1]){

                swap(arr[j], arr[j+1]);
                swaped = true;
            }
        }
        if(!swaped){
            break ;
        }
    }
}


void printArray(const int* arr, const int& n){
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
    printArray(arr, n);

    bubbleSort(arr, n);
    printArray(arr, n);


    delete[] arr;
  
}