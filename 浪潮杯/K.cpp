#include <bits/stdc++.h>
#define ll long long
#define MS 6010

using namespace std;

//ll statu = 0;
struct value{
	ll a;
	ll d;
	ll c;
}v[MS], vt[MS];
bool compare(value a, value b){
	return (double(a.d)/double(a.c) > double(b.d)/double(b.c));
	//if(a.d > b.d)
	//if(a.a-a.d*statu+a.c > b.a-a.a*)
}
int main(){
	ll n ,T;
	ll dp[MS];
	cin >> n >> T;
	for(ll i = 1; i <= n; i++)
		cin >> v[i].a;
	for(ll i = 1; i <= n; i++)
		cin >> v[i].d;
	for(ll i = 1; i <= n; i++)
		cin >> v[i].c;

	sort(v+1, v+n+1, compare);
	// for(ll i = 1; i <= n; i++)
	// 	cout << v[i].a << endl;
	memset(dp, 0 ,sizeof(dp));
	for(ll i = 1; i <= n; i++){
		//cout << "???" << endl;
		for(ll j = T; j-v[i].c >= 1; j--){
			//cout << j << endl;
			dp[j] = max(dp[j], dp[j-v[i].c] + (v[i].a-(j-1)*v[i].d));
		}
	}
	ll ans = 0;
	for(ll j = 1; j <= T; j++)
		ans = max(ans, dp[j]);
		
	cout << ans << endl;
}
