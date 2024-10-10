#include <bits/stdc++.h>
using namespace std;

//1. divide array into two part by using mid
//2. call that function until array divide into single array. ex: 5, 6, 7
//3. create two new array and copy of these array
//4. then compare and merge into original array;

void merge(int* arr, int s, int e){

    //1. Create two array by given size
    //2. Copy main array's value into these two array
    //3. Compare two array and marge them [smaller or bigger]

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
    //here k is the main array index
    int k = s;
    for (size_t i = 0; i < length1; i++){
        leftArray[i] = arr[k++];
    }

    k = mid+1;
    for (size_t i = 0; i < length2; i++){
        rightArray[i] = arr[k++];
    }
    //upper portion is for create new array and copy value from main array;

    //now this time to sort and merge array
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
