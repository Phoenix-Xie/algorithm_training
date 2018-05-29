#include <iostream>
#include <bitset>
#include <memory.h>
#define MS 100010
#define LL long long
using namespace std;
LL p[MS];


int prime(LL n){
	bitset <MS> v;
	memset(p, 0, sizeof(p));
	LL x = 0;
	for(LL i = 2; i <= n; i++){
		if(v[i] == 0){
			p[x] = i;
			x++;
			LL t = 0;
			for(LL j = i; j <= n/i; j++){
				if(j == p[t] && t+1 != x){
					t++; 
					continue;
				}
				v[j*i] = 1;
			}
		}
	}
	return x;
}

int main(){
	LL n;
	cin >> n;
	LL x = prime(n);
	for(LL i = 0; i < x; i++){
		cout << p[i] << ' ';
		if(i%5 == 4){
			cout << endl;
		}
	}
}
