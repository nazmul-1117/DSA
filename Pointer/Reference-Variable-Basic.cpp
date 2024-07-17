#include <bits/stdc++.h>
using namespace std;

void arrayPass(/*int (&arr)[5]*/ int* arr){
	arr[0] = 10;
	cout << &arr << endl;
}

void updateData(int& c){
	c = 10;
}

int32_t main(){
    
    int a = 5;
    int& b = a;

    ++a;

    cout << "Before Update Call: \n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    updateData(b);

    cout << "\nAfter Update Call: \n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // int arr[5];
    int arr[5] = {0};
    cout << "Before update: " << arr[0] <<endl;

    arrayPass(arr);
    cout << arr << endl;
    cout << "After update: " << arr[0] <<endl;
}