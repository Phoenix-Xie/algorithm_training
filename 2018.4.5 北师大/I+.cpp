#include <stdio.h>
#include <memory.h>
#include <bitset>
#define LL long long
#define MS 1000050

using namespace std;
LL n;
LL b[MS], d[MS];

LL lowbit(LL x){
	return x & -x;
}

LL query(LL x){
	LL res = 0;
	while(x){
		res += b[x];
		x -= lowbit(x);
	}
	return res;
}

void insert(LL x, LL value){
	while(x < n){
		b[x]+=value;
		x += lowbit(x);
	}
}
int main(){
	LL k;
	LL T;
	scanf("%d", &T);
	while(T--){
		scanf("%lld%lld", &n, &k);
		memset(d, 0, sizeof(d));
		memset(b, 0, sizeof(b));
		LL now = 0, i, Dn = 0;
		char c[MS];
		scanf("%s", c);
		for(i = 0; i < n; i++){
			if(c[i] == 'D'){
				insert(i+1, 1);
				Dn++;
			}
			else
				now += query(i);
		}

		if(Dn*(n-Dn) < k)
			printf("-1\n");
		else if(now < k)
			printf("%lld\n", k-now);
		else
			printf("%lld\n", now-k);
	}
}
