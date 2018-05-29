#include <iostream>
#include <string>
#include <memory.h>
#define ll long long
#define MS 1010
#define INF 0x3f3f3f3f
#define MOD 1000000007
using namespace std;
ll a[MS][MS];
ll c[MS][MS];
ll N, X;
char opt;

void add(ll x, ll y, ll i){
	for(; x <= N; x += x&-x) c[i][x] += y;
}

ll ask(ll x, ll i){
	ll ans = 0;
	for(; x; x -= x&-x) ans += c[i][x];
	return ans;
}

int main(){
	ll x,y,x_,y_, i, j, T;
	cin >> X;
	while(X--){
		cin >> N >> T;
		while(T--){
			cin >> opt;
			if(opt == 'C'){
				cin >> x >> y >> x_ >> y_;
				for(i = x; i <= x_; i++){
					add(y,1,i);
					add(y_+1,-1,i);
				}
			}
			else{
				cin >> x >> y;
				if(ask(y,x)%2)
					cout << 1 << endl;
				else
					cout << 0 << endl;
			}
		}
	}
}
