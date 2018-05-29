#include <bits/stdc++.h>
#define ll long long
#define MS 100010
#define MAX 0x3f3f3f3f
using namespace std;
ll n, k, m;
map <string, ll> s;
string st;
ll v[MS];
ll ver[MS];
ll temp[MS];
ll vis[MS];
int main(){
	cin >> n >> k >> m;
	ll i, j;
	ll num, a, b;
	for(i = 1; i <= n; i++){ 
		cin >> st;
		s[st] = i;
	}
	for(i = 1; i <= n; i++)	cin >> v[i];
	for(i = 1; i <= n; i++) ver[i] = i;
	
	for(i = 0; i < k; i++){
		cin >> num;
		ll min_n = MAX;
		for(j = 0; j < num; j++){
			cin >> temp[j];
			min_n = min(temp[j], min_n);
		}
		for(j = 0; j < num; j++){
			v[temp[j]] = min_n;
		}
	}
	ll ans = 0;
	for(ll i = 0; i < m; i++){
		cin >> st;
		ans += v[s[st]]; 
	}
	cout << ans << endl;
}
