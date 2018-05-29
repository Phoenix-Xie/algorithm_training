#include <stdio.h>
#define MS 110

int a[MS];
int main(){
	int n;
	while(scanf("%d", &n) == 1){
		int i;
		for(i = 0; i < n; i++) scanf("%d", &a[i]);

		if(n == 1){
			if(a[0] == 0) printf("UP\n");
			else if(a[0] == 15) printf("DOWN\n");
			else printf("-1\n");
			continue;
		}
		if(a[n-1] == 15){ 
			printf("UP\n");
			continue;
		}
		if(a[n-1] == 0){
			printf("DOWN\n");
			continue;
		}
		if(a[n-1] > a[n-2]){
			printf("UP\n");
		}
		else{
			printf("DOWN\n");
		}
	}
}