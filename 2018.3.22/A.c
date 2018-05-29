#include <stdio.h>
#define MS 110
int judge(char c);
int main(){
	int n; 
	while(scanf("%d", &n) == 1){
		int i;
		char c[MS];
		for(i = 0; i < n; i++) scanf("%c", &c[i]);

		char statu[2] = {'R', 'U'}; // R 0,U 1
		int index = judge(c[0]);

		int count = n;
		for(i = 1; i < n; i++){
			if(c[i] == 'R'){
				if(index == 1){
					count--;
					i+=1;
					index = judge(c[i]);
				}
			}
			else{
				if(index == 0){
					count--;
					i+=1;
					index = judge(c[i]);
				}
			}
		}
		printf("%d\n", count);
	}
	
}

int judge(char c){
	int index;
	if(c == 'R')
		index = 0;
	else
		index = 1;
	return index;
}
