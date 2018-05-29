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
	ll now = 0;
	ll time = 0;
	ll t_counter = 2;
	cin >> now;
	if(n >= 2)
		cin >> t;
	while(t_counter < n){
		while(t <= h-now && t_counter < n){
			now += t;
			cin >> t;
			t_counter++;
		}

		time++;
		now-=k;
		now = max((ll)0, now);

		time += now/k;
		now = now%k;
		if(t > h-now){
			time++;
			now = 0;
		}
		//cout << t_counter << " " << time << endl;
	}
	if(t > h-now){
		time++;
		now = 0;
	}
	now+=t;
	if(now > 0){
		time += now/k;
		t = now%k;
		if(t){
			time++;
		}
	}
	cout << time << endl;
}
