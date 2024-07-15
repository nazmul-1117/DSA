#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int32_t main(){
  
  int num;
  cin >> num;

  int *ptr = NULL;
  ptr = &num;

  cout << "Number: " << num << endl;
  cout << "Address of Number: " << ptr << endl;
  cout << "Value of ptr: " << *ptr << endl;
  cout << "Address of ptr: " << &ptr << endl;
  
  cout << "Size of number: " << sizeof(num) << endl;
  cout << "Size of pointer: " << sizeof(ptr) << endl;

  //copy pointer
  int *ptr2 = NULL;
  ptr2 = ptr;

  cout << "\nValue of ptr2: " << *ptr2 << endl;

  // important concept
  int i=5;
  int *ptr3 = &i;
  cout << "Value of ptr3: " << ++(*ptr3) << endl;
  cout << "Address of ptr3: " << ptr3 << endl;
  cout << "Address of ptr3+1: " << ptr3+1 << endl;


}