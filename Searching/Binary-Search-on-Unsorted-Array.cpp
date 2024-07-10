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

int binarySearch(const int *arr, const int& strt, const int& n, const int& key){
    int s = strt;
    int e = n-1;
    int mid = -1;

    while(s <= e){

        mid = s + (e-s)/2;

        // cout <<"start: "<<s<<endl;
        // cout <<"end: "<<e<<endl;
        // cout <<"mid: "<<mid<<endl;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            s = mid+1;
        
        }else{
            e = mid-1;
        }
    }
    return mid;
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
    int pivotData = arr[pivotIndex];
    cout << "Pivot index: " << pivotIndex << endl; 
    cout << "Pivot data: "<< pivotData << endl << endl;


    int key = 8;
    int binarySearchIndex = -1;

    if(pivotData <= key && key <= arr[n-1]){
        binarySearchIndex = binarySearch(arr, pivotIndex, n, key);
    
    }else{
        binarySearchIndex = binarySearch(arr, 0, pivotIndex, key);
    }

    cout << "Binary Search index: " << binarySearchIndex << endl; 
    cout << "Binary Search data: "<< arr[binarySearchIndex] << endl << endl;

    int s=pivotIndex;
    
    
    // printArray(arr, n);

    delete[] arr;
  
}