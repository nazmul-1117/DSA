// input:
// 5
// 5 4 3 2 1

// output:
// 5 4 3 2 1 
// 1 2 3 4 5 

#include <bits/stdc++.h>
#define lld long long int

using namespace std;

void printArray(const int* arr, const int& n);

void insertionSort(int* arr, const int& n){

    for (int i = 1; i < n; ++i){
        
       int key = arr[i], j = i-1;
       while( key < arr[j] && j>=0){

        arr[j+1] = arr[j];
        j--;
       }

       arr[j+1] = key;

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

    insertionSort(arr, n);
    printArray(arr, n);


    delete[] arr;
  
}