#include <bits/stdc++.h>
#define MS 100100
#define ll long long

using namespace std;

ll n, a;
int main(){
	while(cin >> n && n){
		ll i, j, ans = 0, last = 0;
		for(i = 0; i < n; i++){
			cin >> a;
			last += a;
			ans += abs(last);
		}
		cout << ans << endl;
	}
}
