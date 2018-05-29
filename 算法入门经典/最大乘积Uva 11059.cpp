#include <bits/stdc++.h>
#define ll long long 
#define Fup(A,B,C) for(C = A; C <= B; C++)
#define Fdown(A, B, C) for(C = A; C >= B; C--)
const ll MS = 100010; 
const ll INF = 0x3f3f3f3f;
const ll MOD = 1000000007;
using namespace std;

int main(){
	ll n;
	cin >> n;
	ll i, j;
	ll a[20];
	Fup(1,n,i)
		cin >> a[i];
	ll ans = 1, temp = 1;
	Fup(1,n,i){
		temp = 1;
		Fup(i, n, j){ //从第i位开始，起始一个元素
			ans = max(temp*a[j], ans);
		}
	}
	cou << ans << endl;
}