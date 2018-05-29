#include <bits/stdc++.h>
#define ll long long
#define MS 100

using namespace std;

ll val[14], temp[14];

void put_stone(ll x){
	ll i, j;
	for(i = 0; i < 14; i++) temp[i] = val[i];
	ll num = temp[x];
	temp[x] = 0;
	ll t = num/14;
	for(i = 0; i <14; i++) temp[i]+= t;
	t = num%14;
	for(i = x+1; i <= x+t; i++){
		ll k = i%14;
		temp[k]++;
	}
}

ll count_score(){
	ll ans = 0;
	for(ll i = 0; i < 14; i++){
		if(temp[i]%2==0){
			ans += temp[i];
		}
	}
	return ans;
}

int main(){
	ll i, j, ans = 0;
	for(i = 0; i < 14; i++) cin >> val[i];
	for(i = 0; i < 14; i++){
		put_stone(i);
		//cout << i+1 << ": ";
		//for(j = 0; j < 14; j++) cout << temp[j] << " ";
		//cout << endl;
		ans = max(count_score(), ans);
	}
	cout << ans << endl;
}
