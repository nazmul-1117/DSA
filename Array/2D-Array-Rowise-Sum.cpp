#include <bits/stdc++.h>
#define lld long long int

#define N 3

using namespace std;


void printArray(int arr[][N], int n){

    int maxRow = INT_MIN;
    int index = 0;
    
    for (int i = 0; i < n; ++i){
        int a=0;
        
        for (int j = 0; j < n; ++j){

            cout << arr[i][j] << " ";
            a += arr[i][j];
        }
        cout << " ---> " << a << endl;

        if(a > maxRow){
            maxRow = a;
            index = i+1;
        }

    }

    cout << "\nMax Sum: " << maxRow << "\nIndex: " << index << endl;
}

int32_t main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    uint16_t n;
    cin >> n;

    int arr[N][N];

    for (int i = 0; i < n; ++i){
    	
    	for (int j = 0; j < n; ++j){
    		
    		cin >> arr[i][j];
    	}
    }

    printArray(arr, n);
}