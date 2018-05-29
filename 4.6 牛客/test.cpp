#include <stdio.h>
#define LL long long
LL pow(LL a, LL t){
    LL ans = 1;
    LL i;
    for(i = 0; i < t; i++){
       ans *= a;
    }
    return ans;
}
LL cheng(int n){
    LL i = n, ans = 1;
    for(i = n; i >= 2; i--){
        ans *= i;
    }
    return ans;
}
int main(){
    LL n;
    while(scanf("%lld", &n) == 1){
    	LL ans = cheng(n) * 4;
        printf("%lld", ans);
    }
}
