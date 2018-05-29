#include <stdio.h>
#define MS 110
int main(){
	int n;
	while(scanf("%d", &n) == 1){
		int i;
		char c[MS];
		scanf("%s", &c);

		int j;
		int maxc = 0;
		for(i = 1; i <= n; i++){
			int flag = 1;
			for(j = i+1; j <= 2*i; j++){
				if(c[j-i-1] != c[j-1]){
					flag = 0;
					break;
				}
			}
			if(flag){
				maxc = i > maxc ? i : maxc;
			}
		}
		int count = 0;
		if(maxc!=0){
			count = 1;
		}
		printf("%d\n", n-maxc+count);
	}

}