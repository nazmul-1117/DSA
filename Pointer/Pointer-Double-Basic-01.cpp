
// assume address
// a = 001;
// ptr = 101;
// ptr2 = 201;
// ptr3 = 301


#include <bits/stdc++.h>
#define lld long long int

using namespace std;

void updateValue(int*** ptr3){

	// ptr3 value (ptr2 address) update
	ptr3 += 1;
	// ptr3 = 201 -> 205;

	// ptr3 -> ptr2 value (ptr address) update
	*ptr3 += 1;
	// ptr2 = 101 -> 105;

	// ptr3 -> ptr2 -> ptr value (a address) update
	**ptr3 += 1;
	// ptr = 001 -> 005;

	// ptr3 -> ptr2 -> ptr -> a value (a value) update
	***ptr3 += 1;
	// a = 5 -> 6;
}

int32_t main(){
    
    int a = 5;
    int* ptr = &a;
    int** ptr2 = &ptr;
    int*** ptr3 = &ptr2;

    // cout << "Values print.....\n";
    // cout <<"Value of a = "<< a << endl;
    // cout <<"Value of *ptr = "<< ptr << endl;
    // cout <<"Value of **ptr2 = "<< ptr2 << endl;
    // cout <<"Value of ***ptr3 = "<< ptr3 << endl << endl;

    // cout << "Adress print.....\n";
    // cout << "Address of a = "<< &a << endl;
    // cout << "Address of *ptr = "<< &ptr << endl;
    // cout << "Address of **ptr2 = "<< &ptr2 << endl;
    // cout << "Address of ***ptr3 = "<< &ptr3 << endl << endl;

    // if((&a == ptr) && (&ptr == ptr2) && (&ptr2 == ptr3)){
    // 	cout << "Address successfully present in pointer block\n";
    // }

    // pass by reference of double pointer;

    // before update:

    cout << "Before Update.....\n";
    cout << "Value of a = "<< a << endl;
    cout << "Value of *ptr = "<< ptr << endl;
    cout << "Value of **ptr2 = "<< ptr2 << endl;
    cout << "Value of ***ptr3 = "<< ptr3 << endl << endl;

    updateValue(ptr3);

    // After update
    cout << "After Update.....\n";
    cout << "Value of a = "<< a << endl;
    cout << "Value of *ptr = "<< ptr << endl;
    cout << "Value of **ptr2 = "<< ptr2 << endl;
    cout << "Value of ***ptr3 = "<< ptr3 << endl << endl;

  
}