#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T); 
	while(T--){
		int n;
		scanf("%d", &n);
		int i, flag = 1;
		char c[20];
		for(i = 0; i < n; i++){
			scanf("%s", c);
			if(c[0] != 'P'){
				flag = 0;
			}
		}
		if(flag)
			printf("MILLION Master\n");
		else
			printf("NAIVE Noob\n");
	}
}
