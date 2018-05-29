#include <iostream>
#include <memory.h>
#define ll long long
const ll MS = 50010; 
using namespace std;


ll N;
ll a[MS];
ll c[MS];
void add(ll x, ll y){
	for(;x <= N;x += x&-x) c[x]+=y;
}

ll ask(ll x){
	ll ans = 0;
	for(;x; x-= x&-x) ans+=c[x];
	return ans; 
}

int main(){
		ios_base::sync_with_stdio(false);	
	cin.tie(0);cout.tie(0);

	ll T, K;
	cin >> T;
	for(K = 1; K <= T; K++){
		cout << "Case " << K << ":" << endl;
		ll ans[MS] = {0};
		ll ansindex = 0;
		memset(a, 0, sizeof(a));
		memset(c, 0, sizeof(c));
		cin >> N;
		ll i, j;
		for(i = 1; i <= N; i++){
			cin >> a[i];
			add(i, a[i]);
		}
//		for(i = 1; i <= N; i++) cout << c[i] <<  " ";
		char s[10];
		
		cin >> s;
		ll at, bt;
		while(s[0] != 'E'){
			cin >> at >> bt;
			if(s[0] == 'Q'){
//				ans[ansindex++] = ask(bt) - ask(at-1);
				cout << ask(bt) - ask(at-1) << endl; 
			}
			if(s[0] == 'A'){
				add(at,bt);
			}
			if(s[0] == 'S'){
				add(at, -bt);
			}
			cin >> s;
		}
//		cout << "Case " << K << ":" << endl;
//		for(i = 0; i < ansindex; i++)
//			cout << ans[i] << endl;
	}
}
