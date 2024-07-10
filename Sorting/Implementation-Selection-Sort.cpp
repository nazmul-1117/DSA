#include <bits/stdc++.h>
#define lld long long int

using namespace std;

void printArray(const int* arr, const int& n);

void selectionSort(int* arr, int& n){

    for(int i=0; i<n; i++){
        int min = i;

        for(int j=i+1; j<n; j++){
            
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
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

    selectionSort(arr, n);
    printArray(arr, n);


    delete[] arr;
  
}