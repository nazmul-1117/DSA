#include <bits/stdc++.h>
#define lld long long int

using namespace std;

static uint16_t n=3;


void serialPrint(int arr[][3]){
	
	bool x = true;

	for (int i = 0; i < n; ++i){
		int j;

		if(x){
			j = 0;
			x = false;

			for (; j < n; ++j){
            cout << arr[j][i] << " ";
        }
		
		}else{
			j = n-1;
			x = true;

			for (; j >= 0; --j){
            	cout << arr[j][i] << " ";
			}    
    	}
    	cout << endl;
	}
}

void printArray(int arr[][3]){

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cout << arr[i][j] << " ";
        }
        cout << endl;    
    }
    cout << endl;
}

int32_t main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // cin >> n;

    int arr[3][3];

    for (int i = 0; i < n; ++i){
    	
    	for (int j = 0; j < n; ++j){
    		
    		cin >> arr[i][j];
    	}
    }

    printArray(arr);
    serialPrint(arr);

  
}