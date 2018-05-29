#include <bits/stdc++.h>
#define ll long long
#define MS 200010

using namespace std;

int main(){
	ll a, b, n;
	cin >> n >> a >> b;
	ll i;
	ll remember[MS];
	for(i = 0; i < n; i++){
		ll x, vx, vy;
		cin >> x >> vx >>vy;
		remember[i] = vx*a-vy;
	}
	sort(remember, remember+n);
	for(i = 0; i < n ;i ++) cout << remember[i] << endl;
	ll ans = 0, count_temp = 1, temp = remember[0];
	for(i = 1; i < n; i++){
		if(remember[i] == temp) count_temp++;
		else{
			temp = remember[i];
			ans += 2*temp;
			count_temp = 1;
		}
	}
	if(count_temp != 1){
		ans+=2*count_temp;
	}
	cout << ans << endl;
	return 0;
}
