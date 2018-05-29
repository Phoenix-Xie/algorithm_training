#include <bits/stdc++.h>
#define ll long long 
#define Fup(A,B,C) for(C = A; C <= B; C++)
#define Fdown(A, B, C) for(C = A; C >= B; C--)
const ll MS = 100010; 
const ll INF = 0x3f3f3f3f;
const ll MOD = 1000000007;
using namespace std;

int main(){
	ll k, i, j, index = 0;
	cin >> k;
	ll ans[MS][2];
	Fup(k+1, 2*k, i){
		if((k*x) % (x-k) == 0){
			y = (k*x) / (x-k);
			ans[index][0] = x;
			ans[index++][1] = y;
		}
	}
	Fup(0, index-1, i){
		cout << "1/" << k << " = " << "1/" << ans[i][0] << " + " << "1/" << ans[i][1] << endl;
	}
}