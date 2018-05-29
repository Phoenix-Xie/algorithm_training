#include <stdio.h>
#include <memory.h>
#include <bitset>
#define MS 1000050

using namespace std;
int main(){
	long long k, n;
	long long T;
	scanf("%lld", &T);
	while(T--){
		scanf("%lld%lld", &n, &k);
		long long now = 0, i, Dn = 0;
		char c[MS];
		scanf("%s", c);
		for(i = 0; i < n; i++){
			if(c[i] == 'D'){
				Dn++;
			}
			else
				now += Dn;
		}

		if(Dn*(n-Dn) < k)
			printf("-1\n");
		else if(now < k)
			printf("%lld\n", k-now);
		else
			printf("%lld\n", now-k);
	}
}
