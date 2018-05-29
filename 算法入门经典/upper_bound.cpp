#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, v;

int main(){
	v = 4;
	ll a[15] = {0,1,2,3,3,4,4,4,5,5,5,5,6,6,7};
	ll l = 0, r = 14,m;
	while(l < r){
		m = l + (r-l)/2;
		if(a[m] >= v) r = m;
		else l = m+1;
	}
	cout << m;
	l = 0; r = 14;
	while(l < r){
		m = l + (r-l)/2;
		if(a[m] <= v) l = m+1;
		else r = m;	
	}
	cout << m << " " << a[m];
}
