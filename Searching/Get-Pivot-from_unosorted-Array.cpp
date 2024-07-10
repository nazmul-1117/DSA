// input
// 6
// 8 10 17 1 2 3

// output
// 8 10 17 1 2 3 
// Pivot index: 3
// Pivot data: 1

#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int findPivot(const int* arr, const int& n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s < e){

        if(arr[mid] >= arr[0]){
            s = mid+1;

        }else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }

    return s;
}

void printArray(const int *arr, const int& n){
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

    int pivotIndex = findPivot(arr, n);
    cout << "Pivot index: " << pivotIndex << endl; 
    cout << "Pivot data: "<< arr[pivotIndex] << endl << endl;

    delete[] arr;
  
}