// binary search and sorted check

#include <iostream>
using namespace std;

bool isSorted(int *arr, int n){
    if(n == 0) return true;
    
    if(arr[n] < arr[n-1]) return false;
    
    return isSorted(arr, --n);
}

int binary_search(int *arr, int l, int h, int sItem){
    
    if(l > h){
        return -1;
    }
    
    int mid = l + (h-l)/2;
    
    if(arr[mid] == sItem) return sItem;
    if(arr[mid] < sItem){
        l = mid+1;
    }else{
        h = mid-1;
    }
    
    return binary_search(arr, l, h, sItem);
    
}

void displayData(int arr[], int n){

    if(n == 0) return;  
    
    displayData(arr, --n);
    cout << arr[n] << " ";
}

int32_t main(){
    
    int n = 11;
    
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 69};
    
    displayData(arr, n);
    cout << endl;
    
    if(isSorted(arr, n-1)){
        cout << "Ärray is Sorted" << endl;
        cout << "Item: " << binary_search(arr, 0, n-1, 69) << endl;
        
    }else{
        cout << "Ärray is not Sorted" << endl;
    }
    

    return 0;
}
