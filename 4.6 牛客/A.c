#include <stdio.h>
#define MS 100010
#define LL long long
int main(){
	char s[MS];
	while(scanf("%s", s) == 1){
		LL i = 0;
		LL ans = 1;
		while(s[i] != '\n'){
			int c = 2;
			if(s[i] == 'i' || s[i] == 'I' || s[i] == 'l' || s[i] == 'L'){
				c = 4;
			}
			if(s[i] == '0' || s[i] == 'o' || s[i] == 'O'){
				c = 3;
			}
			ans *= c;
			ans = ans % 1000000007;
			i++;
		}
		printf("%lld\n", ans);
	}
	
}
