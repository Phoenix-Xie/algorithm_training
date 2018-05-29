#include <bits/stdc++.h>
#define ll long long
#define MS 10010
#define INF 0x3f3f3f3f
#define MOD 1000000007
using namespace std;
ll a[MS];
ll c[MS];
ll N;
ll sum[MS];
ll add(ll x, ll y){
	for(; x<= N; x += x & -x) c[x] += y;
}
ll ask(ll x){
	ll ans = 0; 
	for(; x; x-= x & -x) ans+=c[x];
	return ans; 
}
int main(){
	cin >> N;
	for(ll i = 1; i <= N; i++){
		cin >> a[i];
		sum[i] = sum[i-1]+a[i];
	}
	for(ll i = 1; i <= N; i++)
		add(i, a[i]);

	for(ll i = 1; i <= 3; i++){
		ll x;
		cin >> x;
		cout << ask(x) << endl;
		cout << sum[x] << endl;
	}
}
