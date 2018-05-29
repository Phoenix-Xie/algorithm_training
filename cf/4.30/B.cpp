#include <bits/stdc++.h>
#define  ll long long
#define MS 100
using namespace std;

int main(){
	ll n, m, k;
	cin >> n >> m >> k;
	if(k >= 0 && k <= n-1){
		cout << k+1 << " " << 1 << endl;;
	}
	else{
		k -= (n-1);
		//cout << k << endl;
		ll t = k / (m-1);
		k = k %(m-1);
		//cout <<t << endl;
		if(k == 0){
			if(t%2 == 0){
				cout << n-t+1 << " "<< 2 << endl;
			}
			else{
				cout << n-t+1 << " " << m << endl;
			}
		}
		else if(t % 2 == 0){
			cout << n-t << " " << k+1 << endl;
		}
		else{
			cout << n-t << " " << m-k+1 << endl;
		}
	}
}
