#include <bits/stdc++.h>
#define ll long long
#define MS 200010

using namespace std;
ll num_wa, num_da;
ll hea[MS];
ll pre[MS];
ll find(ll v){
	ll l = 0, r = num_wa;
	ll mid = l+(r-l)/2;
	while(l < r){
		mid = l + (r-l)/2;
		if(pre[mid] <= v) l = mid+1;
		else r = mid;
	}
	return r;
}

int main(){
	
	cin >> num_wa >> num_da;

	pre[0] = 0;
	for(ll i = 0 ; i < num_wa; i++) {
		cin >> hea[i]; 
		pre[i+1] = pre[i]+hea[i];
	}
	ll damage = 0, damage_t;
	for(ll i = 0 ; i < num_da; i++){
		cin >> damage_t;
		damage+= damage_t;
		if(damage >= pre[num_wa]){
			damage = 0;
			cout << num_wa << endl;
		}
		else{
			ll x = find(damage);
			cout << num_wa-x+1 << endl;
		}
	}

}
