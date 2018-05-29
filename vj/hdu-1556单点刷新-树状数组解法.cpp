#include <iostream>
#include <string>
#include <memory.h>
#define ll long long
#define MS 100010
#define INF 0x3f3f3f3f
#define MOD 1000000007
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
	cin >> N;
	while(N){
		ll x, y;
		ll i;
		memset(a, 0, sizeof(a));
		memset(c, 0, sizeof(c));
		for(i = 1; i <= N; i++){
			cin >> x >> y;
			add(x, 1);
			add(y+1,-1);
		}
		for(i = 1; i <= N; i++){
			cout << ask(i);
			if(i != N)
				cout << " ";
		}
		cout << endl;
		cin >> N;
	}
}
