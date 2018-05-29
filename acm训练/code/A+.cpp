#include <bits/stdc++.h>
#define MS 110

using namespace std;

int main(){
	int n, m; 
	cin >> n >> m;
	int i , j;
	char s[MS][MS] = {0};
	char a[MS] = {0};
	int v[MS] = {0};
	for(i = 0; i < n; i++)
		cin >> s[i];
	for(i = 0; i < m; i++){
		for(j = 0; j < n ;j++){
			a[i] = max(a[i], s[j][i]);
		}
	}
	int ans = 0;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			if(s[i][j] == a[j]){
				ans++;
				break;
			}
		}
	}
	cout << ans << endl;
}
