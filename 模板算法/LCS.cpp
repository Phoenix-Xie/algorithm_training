#include <iostream>
#include <memory.h>
#include <algorithm>
using namespace std;
#define LL long long 
#define MS 1000
LL f[MS][MS];
int main(){
	LL n;
	cin >> n;

	LL a[MS];
	LL b[MS];
	memset(f, 0, sizeof(f));
	for(LL i = 1; i <= n; i++)
		cin >> a[i];
	for(LL j = 1; j <= n; j++)
		cin >> b[j];

	for(LL i = 1; i <= n; i++){
		for(LL j = 1; j <= n; j++){
			f[i][j] = max(f[i-1][j], f[i][j-1]);
			if(a[i] == b[j]){
				f[i][j] = max(f[i-1][j-1]+1, f[i][j]);
			}
		}
	}
	cout << f[n][n] << endl;
}
