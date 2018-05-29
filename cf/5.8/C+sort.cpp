#include <bits/stdc++.h>
#define ll long long
#define MS 300010
using namespace std;

struct Len{
	ll l;
	ll r;
	ll num;
	bool operator < (const Len & a){
		if(l == a.l) return r > a.r;
		else return l < a.l;
	}
}len[MS];

int main(){
	ll n;
	cin >> n;
	for(ll i = 0; i < n; i++){
		cin >> len[i].l >> len[i].r;
		len[i].num = i+1; 
	}
	sort(len, len+n);
	ll maxr = len[0].r, index_r = len[0].num;
	for(ll i = 1; i < n; i++){
		if(len[i].r <= maxr){
			cout << len[i].num << " " << index_r << endl;
			return 0;
		}
		else{
			maxr = len[i].r;
			index_r = len[i].num;
		}
	}
	cout << -1 << " " << -1 <<endl;
	return 0;
}
