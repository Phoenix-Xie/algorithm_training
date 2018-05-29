#include <bits/stdc++.h>
#define ll long long
#define MS 1000

using namespace std;

int main(){
	ll n, k;
	cin >> n >> k;
	if(k % 2 == 0){
		ll t = k/2;
		cout << "YES" << endl;
		for(ll i = 1; i <= n; i++)
			cout << "." ;
		cout << endl;
		for(ll j = 0; j < 2; j++){
			cout << "." ;
			for(ll i = 2; i <= t+1; i++)
				cout << "#";
			for(ll i = t+1+1; i <= n; i++)
				cout << ".";
			cout << endl;
		}
		for(ll i = 1; i <= n; i++)
			cout << "."; 
		cout << endl;
	}
	else{
		if((n-2) % 2 == 0)
			cout << "NO" << endl;
		else{
			cout << "YES" << endl;
			for(ll i = 1; i <= n; i++)
				cout << "." ;
			cout << endl;
			ll flag = 1;
			if(k > (n-2) ){
				k -= (n-2);
				cout << ".";
				for(ll i = 2; i <= n-1; i++)
					cout << "#";
				cout << ".";
				cout << endl;
				flag = 0;
			}
			cout << ".";
			for(ll i = 2; i <= (n-k)/2; i++)
				cout << ".";
			for(ll i = (n-k)/2+1; i <= (n+k)/2; i++)
				cout << "#";
			for(ll i = (n+k)/2+1; i <= n-1; i++)
				cout << ".";
			cout << "." << endl;
			for(ll i = 1; i <= n; i++)
				cout << "." ;
			cout << endl;
			if(flag){
				for(ll i = 1; i <= n; i++)
					cout << "." ;
				cout << endl;
			}
		}
	}
}
