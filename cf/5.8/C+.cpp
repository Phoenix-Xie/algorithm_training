#include <bits/stdc++.h>
#define MS 10000
#define ll long long 

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);	
	cin.tie(0);cout.tie(0);
	ll n, k;
	cin >> n >> k;
	ll i, j;
	ll a;
	ll v[MS], val[MS];
	fill(v, v+256, 0);
	fill(val, val+256, -1);
	for(i = 0; i < n; i++){
		cin >> a;
		ll flag = 1;
		if(val[i] != -1)
			cout << val[i] << endl;
		else{
			for(j = a; j >= a-k+1 && j > 0 && j <= 255; j--){
				if(v[j]){
					break;
				}
			}
			ll t = j;
			cout << t << endl;
			v[j] = 1;
			for(j = t; j < t+k; j++){
				val[j] = t;
			}
		}
	}
}

