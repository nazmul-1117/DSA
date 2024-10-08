// linear search using recursion

#include <iostream>
using namespace std;

bool linear_search(int arr[], int n, int sItem){
    
    if(n < 0) return 0;
    
    if(sItem == arr[0]){
      return true;
      
    }else{
        bool ans = linear_search(arr+1, n-1, sItem);
        return ans;
    }
}

int32_t main(){
    
    int n = 11;
    int arr[] = {0, 1, 2, 3, 4, 59, 6, 7, 8, 9, 69};
    
    if(linear_search(arr, n-1, 69)){
        cout << "Data Found" << endl;
        
    }else{
        cout << "Data not Found" << endl;
    }
    
    return 0;
}
