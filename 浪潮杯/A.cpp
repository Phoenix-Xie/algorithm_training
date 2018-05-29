#include <bits/stdc++.h>
#define ll long long
#define MS 100
#define INF 0x3f3f3f3f
#define MOD 1000000007
using namespace std;
bool wythoff(ll a, ll b){
	const double judge = (sqrt(5)+1.0)/2.0;
	ll k = b - a;
	if(int(judge * k) == a) return false;
	else return true;
}
int main(){
	ll T;
	cin >> T;
	ll a[MS];
	while(T--){
		ll n, i, j;
		cin >> n;
		ll t;
		ll ans, a, b;
		if(n == 1){
			cin >> ans;
			if(ans)
				cout << "Sherlock" << endl;
			else
				cout << "Watson" << endl;
		}
		if(n == 2){
			cin >> a >> b;
			if(a > b){
				ll t = a;
				a = b;
				b = t;
			}
			if(wythoff(a, b))
				cout << "Sherlock" << endl;
			else
				cout << "Watson" << endl;
		}
		else{
			cin >> ans;
			for(i = 2; i <= n; i++){
			cin >> t;
			ans ^= t;
			}
			if(ans)
				cout << "Sherlock" << endl;
			else
				cout << "Watson" << endl;
		}
		
	}
}
