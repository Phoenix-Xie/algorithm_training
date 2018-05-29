#include <bits/stdc++.h>
#define ll long long
#define MS 5010

using namespace std;

//bool solve(ll *a, ll *b, ll *c, ll n) {
//  fill(c, c+n, -1);
//  for(int col = 1; col <= n; col++) {
//    // find a rook with smalleset b that is not yet assigned
//    int rook = -1, minb = n+1;
//    for(int i = 0; i < n; i++)
//      if(c[i] < 0 && b[i] < minb && col >= a[i]) { rook = i; minb = b[i]; }
//    if(rook < 0 || col > minb) return false;
//    c[rook] = col;
//  }
//  return true;
//}
bool solve(ll l[], ll r[], ll ans[], ll n){
	fill(ans, ans+n, -1);
	for(ll i = 1; i <= n; i++){
		ll index = -1, minr = n+1;
		for(ll j = 0; j < n; j++)
			if(ans[j] < 0 && l[j] <= i && r[j] < minr){ index = j; minr = r[j];}
		if(index < 0|| i > minr ) return false;
		ans[index] = i; 
	}
	return true;
}

int main(){
	ll n;
	while(cin >> n && n){
		ll x1[MS], x2[MS], y1[MS], y2[MS];
		for(ll i = 0; i < n; i++){
			cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
		}
		ll x[MS], y[MS];
		if(solve(x1, x2, x, n) && solve(y1, y2, y, n)){
			for(ll i = 0; i < n; i++){
				cout << x[i] << " " << y[i] << endl;
			}
		}
		else
			cout << "IMPOSSIBLE" << endl;
	}
}

/*
8
1 1 2 2
5 7 8 8
2 2 5 5
2 2 5 5
6 3 8 6
6 3 8 5
6 3 8 8
3 6 7 8
8
1 1 2 2
5 7 8 8
2 2 5 5
2 2 5 5
6 3 8 6
6 3 8 5
6 3 8 8
3 6 7 8
0
*/
