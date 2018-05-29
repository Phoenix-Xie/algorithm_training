#include <bits/stdc++.h>
#define ll long long 
#define MS 1000000010

using namespace std;

ll c1[MS];
ll c2[MS];
ll n;
ll ans[MS];
void add(ll x, ll y,ll t){
	if(t == 1) for(;x <= n; x+= x & -x) c1[x]+=y;
	else for(;x <= n; x+= x & -x) c2[x]+=y;
	//cout << "ad" << endl;
}

ll ask(ll x, ll t){
	ll ans_t = 0;
	if(t == 1) for(; x; x -= x&-x) ans_t+=c1[x];
	else for(;x;x -= x & -x) ans_t+=c2[x];
	return ans_t;
}
int main(){
	n = MS;
	ll T;
	cin >> T;
	ll a, b;
 	ll i, j;
 	ll flag = 0;
 	ll ans_1 = 0, ans_2 = 0;
	for(i = 1; i <= T ; i++){
		
		cin >> a >> b;
		if(flag) continue;
		b = MS-b+1;
		if(ask(a, 1) && ask(b, 2)){
			//cout << "???" << endl;
			for(j = a-1; j >= 1; j--){
				if(ans[j]){
					ans_1 = i;
					ans_2 = ans[j];
					flag = 1;
					break;
				}
			}
			
		}
		ans[a] = i;
		add(a, 1, 1); add(b, 1, 2);
	}
	if(flag){
		cout << ans_1 << " " <<ans_2<< endl;
	}
	else cout << -1 << " " << -1 <<  endl;
}
