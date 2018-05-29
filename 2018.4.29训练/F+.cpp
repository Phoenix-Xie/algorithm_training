#include <bits/stdc++.h>
#define ll long long 
#define Fup(A,B,C) for(C = A; C <= B; C++)
#define Fdown(A, B, C) for(C = A; C >= B; C--)
const ll MS = 10010; 
const ll INF = 0x3f3f3f3f;
const ll MOD = 1000000007;
using namespace std;

int main(){
	ll n, h, k, i, j, t;
	cin >> n >> h >> k;
	ll now = 0, time = 0;
	while(n--){
		cin >> t;
		if(t > h - now){
			time++;
			now = 0;
		}
		now+=t;
		time+=now/k;
		now %= k;
	}
	if(now) time++;
	cout << time << endl;
}