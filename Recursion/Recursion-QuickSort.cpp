#include <bits/stdc++.h>
using namespace std;

//0.  This algorithm is for Quick Sort
//1. take a pivot
//2. count all elements < pivot
//3. place pivot in right place [s+count]
    //swap pivot old index and new index
//4. swap those elements, who have >p in left and <p in right array

size_t partition(int* arr, int s, int e){

    //1. Assume a pivot
    //2. count all minimum value from pivot

    int pivotData = arr[s];

    //count all data less than or equal to pivot data
    size_t count=0;
    for (size_t i = s+1; i <= e; i++){
        if(arr[i] <= pivotData){
            count++;
        }
    }
    size_t pivotIndex = s+count;

    //place pivot in right place
    swap(arr[s], arr[pivotIndex]);

    size_t i = s;
    size_t j = e;

    //if left side has big value and right side has small value, then swap;

    while (i < pivotIndex && j > pivotIndex){
        
        while (arr[i] <= pivotData){
            i++;
        }

        while (arr[j] > pivotData){
            j--;
        }

        if (i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int* arr, int s, int e){

    //base case
    if(s >= e) return ;

    //find the pivot index and ensure that it placed in right place
    size_t pivotIndex = partition(arr, s, e);

    //------------------------------
    //    |s --> p-1| p | p+1 --> e|
    //------------------------------
    //call for left part
    quickSort(arr, s, pivotIndex-1);

    //call for right part
    quickSort(arr, pivotIndex+1, e);
}

void displayArray(int *arr, int s, int e){

    for (size_t i = s; i <= e; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int n = 10;
    int s = 0;

    int arr[] = {12, 15, 11, 9, 10, 7, 1, 0, 5, 99};

    //befort sort array
    cout << "Before sort: ";
    displayArray(arr, s, n-1);

    quickSort(arr, s, n-1);

    //after merge sort array
    cout << "After sort: ";
    displayArray(arr, s, n-1);
}
