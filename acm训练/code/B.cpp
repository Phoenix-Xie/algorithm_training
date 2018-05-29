#include <bits/stdc++.h>
#define MS 10010
#define ll long long 
using namespace std;
ll abs_t(ll a){
	if(a < 0) return -a;
	else return a;
}
int main(){
	ll n, m, xc, yc, k, dx, dy;
	cin >> n >> m;
	cin >> xc >> yc;
	cin >> k;
	ll i, j, step = 0;
	for(i = 0; i < k; i++){
		cin >> dx >> dy;
		ll xx, yy;
		if(dx > 0)
			xx = (n-xc)/dx;
		else if(dx < 0)
			xx = (xc-1)/abs_t(dx);
		else
			xx = 0x3f3f3f3f;

		if(dy>0)
			yy = (m-yc)/dy;
		else if(dy < 0)
			yy = (yc-1)/abs_t(dy);
		else
			yy = 0x3f3f3f3f;
		ll t = min(xx, yy);
		step+=t;
		//cout << t << endl;
		xc += t*dx;
		yc += t*dy;
		//cout << xc << " " << yc << endl;
	}
	cout << step << endl;
}
/*
4 5
1 1
4
1 0
0 1
-1 0
0 -1

4 5
1 1
3
3 0
0 3
-1 -1

*/
