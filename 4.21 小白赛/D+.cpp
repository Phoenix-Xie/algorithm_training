#include <bits/stdc++.h>
#define MS 1000
#define ll long long

using namespace std;

ll v[MS];
ll d[MS];
ll findr(ll x){
	if(v[x] == x)
		return x;
	else
		return v[x] = findr(v[x]);
}
int main(){
	ll T; 
	cin >> T;
	while(T--){
		ll n, m, i, j, a, b;
		cin >> n >> m;
		memset(d, 0 ,sizeof(d));
		for(i = 0; i <= n; i++)
			v[i] = i;
		for(i = 1; i <= m; i++){
			cin >> a >> b;
			v[findr(a)] = findr(b);
			d[a]++;
			d[b]++;
		}
		ll root = findr(1);
        ll flag = 0;
		for(i = 1; i <= n; i++){
			if(findr(i) != root){
				flag = 1;
				break;
			}
		}
		if(flag){
			cout << "Xun" << endl;
			continue;
		} 
		ll odd_d = 0;
		for(i = 1; i <= n; i++){
			//cout << i << ":" <<  d[i] << endl;
			if(d[i]%2)
				odd_d++;
		}
		if(odd_d == 2 || odd_d == 0)
			cout << "Zhen" << endl;
		else
			cout << "Xun" << endl;
	}
}
