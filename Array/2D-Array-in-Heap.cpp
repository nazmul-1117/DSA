#include <bits/stdc++.h>
using namespace std;

int32_t main(){

	int m, n;
	cin >> m >> n;

	int** arr = new int*[m];

	for (int i = 0; i < n; ++i){
		arr[i] = new int[n];
	}

	for (int i = 0; i < m; ++i){
		
		for (int j = 0; j < n; ++j){

			cin >> arr[i][j];
		}
	}

	cout << "Array Printing\n";
	for (int i = 0; i < m; ++i){
		
		for (int j = 0; j < n; ++j){

			cout << arr[i][j] << " " ;
		}
		cout << endl;
	}

	cout << "Memory deleting... >:(\n";
	for (int i = 0; i < n; ++i){
		delete[] arr[i];
	}
	delete[] arr;

	cout << "Memory delete successfully :)...\n";
}