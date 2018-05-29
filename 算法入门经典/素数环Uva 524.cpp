#include <iostream>
#include <bitset>
#define ll long long
#define MS 1000
using namespace std;

bitset <MS> notP;
bitset <MS> v;
ll a[MS];
ll n;
void dfs(ll cur) {
	if (cur == n + 1) {
		if (!notP[a[1] + a[cur - 1]]) {
			for (ll i = 1; i <= n; i++) {
				cout << a[i];
				if(i!=n)
					cout << " ";
			}
			cout << endl;
		}
	}
	else {
		for (ll i = 2; i <= n; i++) {
			if (!v[i] && !notP[i + a[cur - 1]]) {
				v[i] = 1;
				a[cur] = i;
				dfs(cur+1);
				v[i] = 0;
			}
		}
	}
}

int main()
{	
	ll num = 1;
	while(cin >> n){
		if(num!=1)	cout << endl;
		cout << "Case " << num << ":"<<endl;
		num++; 
		ll N = n * n;
		for (ll i = 2; i <= N; i++) {
			if (!notP[i]) {
				for (ll j = 2; j <= N / i; j++) {
					notP[j*i] = 1;
				}
			}
		}
		a[1] = 1;
		dfs(2);

	}
    return 0;
}
