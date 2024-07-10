// input:
// nazmul

// output:
// lumzan

#include <bits/stdc++.h>
#define lld long long int

using namespace std;

void reverseString(string& str){
	int s = 0;
	int e = str.length()-1;

	while(s<e){
		swap(str[s++], str[e--]);
	}
}

int32_t main(){

	string str;
	cin >> str;

	cout << str << endl;

	reverseString(str);
	cout << str << endl;
}