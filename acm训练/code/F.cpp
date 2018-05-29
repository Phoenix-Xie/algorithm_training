#include <bits/stdc++.h>
#define MS 1010
#define ll long long 
using namespace std;

struct Card{
	ll v[2];
	bool operator < (const Card & a){
		if(a.v[1] == v[1]) return v[0] > a.v[0];
		else return v[1] > a.v[1];
	}
}c[MS];
	
int main(){
	int n;
	cin >> n;
	for(ll i = 0; i < n; i++){
		cin >> c[i].v[0] >> c[i].v[1];
	}
	sort(c, c+n);
	ll time = 1;
	ll ans = 0;
	ll index = 0;
	while(time && index != n){
		time--;
		time += c[index].v[1];
		ans += c[index].v[0];
		index++;
	}
	cout << ans << endl;
}
