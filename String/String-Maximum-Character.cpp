#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int* getMaximumCharacter(string& str){
	int s = 0;
	int e = str.length();

	// 97 --> 122
	// static int *a = new int[26];
	static int a[26] = {0};
	
	// ptr = (int *)calloc(5, sizeof(int));
	// int *a = (int*) calloc(26, sizeof(int));
	// cout << s << " = size\n";


	for(int i=0; i<e; i++){

		char ch = str[i];

		if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
			int b = ch - 'a';
			a[b]++;
		}
	}

	s = sizeof(a) / sizeof(a[0]);
	cout << s << " = size\n";

	int *max_e = max_element(a, a + s);

	cout << "\nMax Element Freq = " << (char)((*max_e)+'a') << endl;
	cout << "\nMax Element = " << (char)((*max_e)+'a') << endl;

	// for(int i=0; i<s; i++){

	// 	cout << a[i] << " ";
	// }

	return a;

}

int32_t main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    cout << str << endl;
    
    // cout << (char)(('a'+0) + 2);

    int *a = getMaximumCharacter(str);
    int e =  sizeof(a) / sizeof(a[0]);

    cout << "Size: " << e << endl;

    for(int i=0; i<=e; i++){

		cout << a[i] << " ";
	}


  
}