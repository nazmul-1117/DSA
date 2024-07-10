#include <bits/stdc++.h>
#define lld long long int

using namespace std;

bool isPalindrome(string& str){
	int s = 0;
	int e = str.length()-1;

	while(s<e){
		
		if(str[s++] != str[e--]){

			return false;
		}
	}
	return true;
}

int32_t main(){

	string str;
	cin >> str;

	cout << str << endl;

	if(isPalindrome(str)){
		cout << str + " is Palindrome" << endl;

	}else{
		cout << str + " is Not Palindrome" << endl;
	}
}