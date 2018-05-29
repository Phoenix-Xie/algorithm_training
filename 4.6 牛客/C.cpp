#include <stdio.h>
#include <memory.h>
int ans = 0;
int m[4][4];
int line(int x){
	int i; 
	for(i = 0; i < 3; i++){
		m[x][i]++;
	}
}
int colum(int x){
	int i;
	for(i = 0; i < 3; i++){
		m[i][x]++;
	}
}
int lined(int x){
	int i;
	for(i = 0; i < 3; i++){
		m[x][i]--;
	}
}
int columd(int x){
	int i;
	for(i = 0; i < 3; i++){
		m[i][x]--;
	}
}
int check(){
	int i, j;
	int flag = 1;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			if(m[i][j] > 9){
				flag = 0;
				break;
			}
		}
		if(!flag) break;
	}
}
int checkok(){
	int i, j;
	int a[9];
	int flag = 1;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			if(m[i][j] > 9){
				flag = 0;
				break;
			if(a[m[i][j]] == 0)
				a[m[i][j]] == 1;
			else{
				flag = 0;
				break;
			}
			}
		}
		if(!flag) break;
	}
}
int dfs(int time){
	int i;
	//printf("??\n");
	if(time > 15)
		return 0;
	for(i = 0 ; i < 3; i++){
		line(i);
		if(check()){
			dfs(time);
		}
		else{
			lined(i);
			if(checkok()){
				ans++;
			}
		}
	}
	for(i = 0 ; i < 3; i++){
		colum(i);
		if(check()){
			dfs(time);
		}
		else{
			columd(i);
			if(checkok()){
				ans++;
			}
		}
	}
}
int main(){
	memset(m, 0, sizeof(m));
	dfs(0);
	printf("%d\n", ans);
}
