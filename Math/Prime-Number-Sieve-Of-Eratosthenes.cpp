#include <bits/stdc++.h>
#define lld long long int

using namespace std;

void sieveOfEratosthenes(const int& n){

	uint16_t count=0;
	vector<bool> prime(n+1, true);

	prime[0] = prime[1] = false;

	for(int i=2; i<=n; i++){

		if(prime[i]){
			++count;

			for(int j=i*2; j<=n; j += i){
				prime[j] = false;
			}
		}
	}

	for (int i = 0; i < n+1; ++i){
		
		if(i==5 || i==10 || i==15 || i==20 || i==25){
			cout << endl;
		}
		cout << prime[i] << " ";
	}
	cout << endl << count << " Count.\n";
}

int32_t main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    uint16_t n;
    cin >> n;

    sieveOfEratosthenes(n);
}