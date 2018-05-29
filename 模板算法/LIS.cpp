//LIS
#include <iostream>
#include <algorithm>
#include <memory.h>
#define LL long long
#define MS 100010

using namespace std;

int main(){
	LL n;
	cin >> n; 
	LL a[MS];
	LL f[MS];
	memset(f, 0, sizeof(f));
	f[1] = 1;
	for(LL i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(LL i = 2; i <= n; i++){
		for(LL j = 1; j <= i; j++){
			if(a[j] < a[i])
				f[i] = max(f[j]+1, f[i]);
		}
	}
	for(LL i = 1; i <= n; i++)
		cout << f[i] << " ";
}
