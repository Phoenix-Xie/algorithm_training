#include <bits/stdc++.h>
#define ll long long
#define MS 10010
#define INF 0x3f3f3f3f
#define MOD 1000000007
using namespace std;

ll quickmod(ll a, ll b, ll c){
	ll ans = 1;
	a = a%c;
	while(b > 0){
		if(b%2 == 1)
			ans=(ans*a)%c;
		b /= 2;
		a = (a*a)%c;
	}
	return ans;
}

int main(){
	ll n, m, ans = 0;
	cin >> n >> m;
	for(ll i = 1; i <= n; i++){
		ans+=quickmod(i,m,MOD);
		ans= ans % MOD;
	}
	cout << ans%MOD << endl;
}
