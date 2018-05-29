#include <stdio.h>
#include <algorithm>
#define MS 110
using namespace std;
char m[MS][MS];
int xx[8] = {0,1,0,-1,1,1,-1,-1};
int yy[8] = {1,0,-1,0,-1,1,-1,1};
int N, M; //行数,列数
int check(int a, int b){
	if(a >= 0 && a < N && b >= 0 && b < M && m[a][b] == '@'){
	return 1;
	}
	return 0;
}
int dfs(int x, int y){
	for(int i = 0; i < 8; i++){
		int xxx = x + xx[i];
		int yyy = y + yy[i];
		if(check(xxx, yyy)){
			m[xxx][yyy] = '*';
			dfs(xxx, yyy);
		}
	}
	return 0;
}

int main(){
 while(scanf("%d%d", &N,&M) == 2){
 	if(N == 0 && M == 0) break;
 	int ans = 0;
 	for(int i = 0; i < N; i++)
 		scanf("%s", &m[i]);
 	for(int i=0; i <N; i++){
 		for(int j = 0; j < M; j++){
 			if(check(i, j)){
 				dfs(i, j);
 				ans++;
 			}
 		}
 	}
 	printf("%d\n", ans);
 }

}
