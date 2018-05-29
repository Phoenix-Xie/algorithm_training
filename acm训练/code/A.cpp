#include <bits/stdc++.h>
#define MS 1010

using namespace std;

int main(){
	int n, m; 
	cin >> n >> m;
	int i , j;
	char s[MS]
	int a[MS];
	int v[MS];
	memset(v, 0, sizeof(v));
	memset(a, 0, sizeof(a));
	for(i = 0; i < n; i++){
		cin >> s;
		for(j = 0; j < m; j++){
			if(s[j] > a[j]){
				a[j] = s[j];
				v[j] = 0;
			}
			if(s[j] == a[j]){
				v[j]++;
			}
		}
	}
	ll ans = 0;
	for(i = 0; i < m; i++){
		if(!v[i]) ans++;
	}
	cout << ans << endl;
}
