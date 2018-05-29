#include <stdio.h>

int main(){
	int n;
	while(scanf("%d", &n) == 1){
		if(n%2 == 1){
			printf("Ehab\n");
		}
		else{
			printf("Mahmoud\n");
		}
	}
}