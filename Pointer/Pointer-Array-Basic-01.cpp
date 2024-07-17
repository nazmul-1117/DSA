#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int32_t main(){
  
  int num[10] = {5, 3, 4, 8, 9, 10, 17, 28, 30, 2};
  // cin >> num;

  int *ptr = NULL;
  ptr = num;

  cout << "Value of num(ptr): " << *num << endl;
  cout << "Address of num: " << ptr << endl;

  cout << "Value of num+1(ptr): " << *(num+1) << endl;
  cout << "Address of num: " << ptr+1 << endl;
  
  cout << "Size of num: " << sizeof(num) << endl;
}