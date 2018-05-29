#include <bits/stdc++.h>
#include <bitset>
using namespace std;

#include <bits/stdc++.h>
#define ll long long
#define MS 200010

using namespace std;
ll num_wa, num_da;
ll find(ll v, ll pre[]){
	ll l = 0, r = num_wa;
	ll mid = l+(r-l)/2;
	while(l < r){
		mid = l + (r-l)/2;
		if(pre[mid] <= v) l = mid+1;
		else r = mid;
	}
	return r;
}
int main(){
	num_wa = 5;
	ll pre[5] = {0,1,1,2,3};
	cout << find(1, pre) << endl;
}
