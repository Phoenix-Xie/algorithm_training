#include <stdio.h> 
#define ll long long
const ll M = 998244353;

int main(){
	ll n, m;
	while(scanf("%lld%lld", &n, &m) == 2){
		ll ans;
		ll mu, zi;
		zi = n*n - m;
		mu = n*n;
		mu = quickmod(mu, M-2, M);
		printf("%lld\n", mu*zi%M);
	}
}
