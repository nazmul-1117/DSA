#include <bits/stdc++.h>
using namespace std;

void merge(int* arr, int s, int e){

    //first create two array by given size
    //then copy value into these two array
    //compare two array and compare them smaller or bigger

    //find the mid
    int mid = s + (e-s)/2;

    //left array length. size = mid-s+1
    int length1 = mid-s+1;

    //right array's length
    int length2 = e-mid;

    //create two array left and right
    int *leftArray = new int[length1];
    int *rightArray = new int[length2];

    //copy, main array to left, right array
    int k = s;
    for (size_t i = 0; i < length1; i++){
        leftArray[i] = arr[k++];
    }

    k = mid+1;
    for (size_t i = 0; i < length2; i++){
        rightArray[i] = arr[k++];
    }

    //now this time to merge array and sort
    int index1 = 0;
    int index2 = 0;
    k = s;

    while (index1 < length1 && index2 < length2){
        if(leftArray[index1] < rightArray[index2]){
            arr[k++] = leftArray[index1++];

        }else{
            arr[k++] = rightArray[index2++];
        }
    }

    //avobe while loop if not working for one condition
    while(index1 < length1){
        arr[k++] = leftArray[index1++];
    }

    while(index2 < length2){
        arr[k++] = rightArray[index2++];
    }

    delete[] leftArray;
    delete[] rightArray;
}

void mergeSort(int* arr, int s, int e){

    //base case
    if(s >= e) return ;

    //find mid
    int mid = s + (e-s)/2;

    //divide left part
    mergeSort(arr, s, mid);

    //divide right part
    mergeSort(arr, mid+1, e);

    //merge the two array
    merge(arr, s, e);
}

void displayArray(int *arr, int s, int e){

    for (size_t i = s; i < e; i++){
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

    mergeSort(arr, s, n-1);

    //after merge sort array
    cout << "Before sort: ";
    displayArray(arr, s, n-1);
}
