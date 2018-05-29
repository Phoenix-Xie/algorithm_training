#include <bits/stdc++.h>
#define MS 10000
#define ll long long
using namespace std;
ll n;
ll a[MS] = {0,8,4,6,7,5,2};
void reverse(ll x){
	x = n - x + 1;
	for(ll i = 1; i <= x; x--,i++){
		ll t = a[i];
		a[i] = a[x];
		a[x] = t;
	}
}

int main(){
	char str[]
	while(scanf("%d", &a[1]) == 1){
		scanf("%c")
		ll i = 2;
		while(scanf("%c%d"))
	}
	n = 6;
	while(1){
		ll t;
		cin >> t;
		reverse(t);
		for(ll i = 1; i <= 6; i++)
			cout << a[i] << " ";
		cout << endl;
	}
}
