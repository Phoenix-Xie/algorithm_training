#include <stdio.h>
#include <algorithm>
#include <queue>
#include <bitset>
#include <memory.h>
#define MS 1010
#define END 0x3f3f3f3f
using namespace std;

int a[MS][MS]; //邻接表

priority_queue <int> q;
void dijsktra(int start, int N, int d[MS]){
	int i, j;
	bool v[MS];
	memset(v, 0, sizeof(v));
	d[start] = 0;
	
	for(i = 1; i < N; i++){
		int x = 0;
		for(j = 1; j <= N; j++)
			if(!v[j] && (x == 0|| d[j] < d[x])) x = j; //找出最小点 x == 0是处理第一次输出的情况
		v[x] = 1;

/*		printf("%d\n", x);*/
		for(j = 1; j <= N; j++){
			d[j] = min(d[j], d[x]+a[x][j]);
/*			printf("%d %d\n", d[x], a[x][j]);*/
		}
	}
}
int main(){
	int N, M, S, T;
	int temp_x, temp_y;
	while(scanf("%d%d%d%d", &N, &M, &S, &T) == 4){
		//init
		int i, j;
		memset(a, 0x3f, sizeof(a));
		for(i = 0; i <= N; i++) a[i][i] = 0;
		for(i = 0; i < M; i++){ 
			scanf("%d%d", &temp_x, &temp_y);
			a[temp_x][temp_y] = 1;
			a[temp_y][temp_x] = 1;
		}
/*		for(i = 1; i <= N; i++){
			for(j = 1; j <= N; j++){
				if(a[i][j] > 10)
					printf("* ");
				else
					printf("%d ", a[i][j]);
			}
			printf("\n");
		}*/
		int dt[MS], ds[MS];
		memset(ds, 0x3f, sizeof(ds));
		memset(dt, 0x3f, sizeof(dt));
		dijsktra(T, N, dt);
		dijsktra(S, N, ds);
		int length = ds[T];
/*		for(i = 0; i <= N; i++) printf("%d ", dt[i]);
		printf("\n");
		printf("%d\n", length);*/
		int count = 0;
		for(i = 1; i <= N; i++){
			for(j = i+1; j <= N; j++){
				if(a[i][j] == 1) continue;
				if(ds[i]+dt[j]+1 >= length && ds[j] + dt[i] +1 >= length){
					/*printf("%d %d %d %d\n", i, j, ds[i]+dt[j]+1, ds[j]+dt[i]+1);*/
					count++;
				}
			}
		}
		printf("%d\n", count);

/*		for(i = 1; i <= N; i++)
			printf("%d ", d[i]);
		printf("\n");*/
	}
}
