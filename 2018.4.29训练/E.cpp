#include <bits/stdc++.h>
#define ll long long 
#define Fup(A,B,C) for(C = A; C <= B; C++)
#define Fdown(A, B, C) for(C = A; C >= B; C--)
const ll MS = 100010; 
const ll INF = 0x3f3f3f3f;
const ll MOD = 1000000007;
using namespace std;

int main(){
	ll i ,j, n ,h, t, ans = 0;
	cin >> n >> h;
	Fup(1,n, i){
		cin >> t;
		if(t > h)
			ans += 2;
		else
			ans ++;
	}
	cout << ans << endl;
}