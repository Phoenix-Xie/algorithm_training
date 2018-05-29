#include <iostream>
#include <cstdio>
#include <algorithm>
#define ll long long 
#define MS 100000
using namespace std;

ll a[MS];
int main(){
	ll t = 0;
	ll i = 0, j;
	cin >> t;
	while(t != -1){
		a[i++] = t;
		cin >> t;
	}
	//cout << i << endl;
	sort(a, a+i);
	double ans = 0;
	for(j = 2; j <= i-3; j++){
		ans += double(a[j]);
	}
	//cout << ans << endl;
	printf("%.2lf\n", ans/(i-4));
}