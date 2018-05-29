#include <bits/stdc++.h>
#define MS 1000
#define ll long long 
using namespace std;

int main(){
	ll a[300], v[300];
	ll i, j, n, size, t;
	cin >> n >> size;

	memset(a, 0 ,sizeof(a));
	for(i = 0; i < n; i++){
		cin >> t;
		cout << t/size*size <<" ";
	}
	cout << endl;
	return 0;
}
