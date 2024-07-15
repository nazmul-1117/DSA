#include <bits/stdc++.h>
#define lld long long int

using namespace std;

void binarySearch(const int arr[][3], const int& m, const int& n, const int& key){

	int s = 0;
	int e = (m*n) - 1;
	int mid = 0;

	while(s <= e){
		mid = s + (e-s)/2;

		int rowIndex = mid/n;
		int colIndex = mid%n;
		int midValue = arr[rowIndex][colIndex];

		if(midValue == key){

			cout << midValue << " Data Found." << endl;
        	return ;
		}

		if(midValue > key){
			e = mid-1;

		}else{
			s = mid + 1;
		}
	}
    cout << key << " Data not Found." << endl;
}


void linearSearch(const int arr[][3], const int& n, const int& key){

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){

        	if(arr[i][j] == key){
        		cout << arr[i][j] << " Data Found." << endl;
        		return ;
        	}
        }
    }
    cout << key << " Data not Found." << endl;
}


void printArray(const int arr[][3], const int& n){

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


    uint16_t n = 3;
    // cin >> n;

    int arr[3][3];

    for (int i = 0; i < n; ++i){
    	
    	for (int j = 0; j < n; ++j){
    		
    		cin >> arr[i][j];
    	}
    }

    printArray(arr, n);  

    int key = 10;
    cout << "Linear Search: ";
    linearSearch(arr, n, key);

    key = 6;
    int m = 3;
    cout << "Binary Search: ";
    binarySearch(arr, m, n, key);
}