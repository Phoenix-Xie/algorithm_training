#include <stdio.h>
#include <algorithm>
#include <bitset>
#include <memory.h>
#define MS 100
using namespace std;

int n, ans, edge;
int m[MS][MS]; //邻接表
int dis[MS];

int prim(){
	ans = 0;
	int c = 1, less_dist = 0x3f3f3f3f, next = 1;
	memset(dis, 0x3f, sizeof(dis));
	bitset <MS> v;
	dis[c] = 0;
	for(int i = 1; i <= n-1; i++){
		v[c] = 1;
		less_dist = 0x3f3f3f3f;
		for(int j = 1; j <= n; j++){
			if(v[j] == 0 && dis[j] > dis[c]+m[c][j]){
				dis[j] = dis[c]+m[c][j];
				next = j;
				less_dist = dis[j];
			}
		}
		printf("%d\n", less_dist);
		ans+=less_dist;
		/*for(int j = 1; j <= n; j++)
			printf("%d ", dis[j]);
		printf("\n");*/
		c = next;
	}
}

int lowcost[MS];
int nearv[MS];
int prim2(){
	ans = 0;
	memset(lowcost, 0x3f, sizeof(lowcost));
	memset(nearv, 1, sizeof(nearv));
	int v = 1; //当前节点
	lowcost[v] = 0;
	for(int i = 1; i <= n-1; i++){
		nearv[v] = -1;
		for(int j = 1; j <= n; j++){
			if(nearv[j] != -1 && m[j][v] < lowcost[j]){
				nearv[j] = v;
				lowcost[j] = m[j][v];
			}
		}

		/*for(int j = 1; j <= n; j++){
			printf("%d ", lowcost[j]);
		}
		printf("\n");
		for(int j = 1; j <= n; j++){
			printf("%d ", nearv[j]);
		}
		printf("\n");*/


		int lowest = 0x3f3f3f3f;
		for(int j = 1; j <= n; j++){
			if(lowcost[j] < lowest && nearv[j] != -1){
				lowest = lowcost[j];
				v = j;
			}
		}
		/*printf("i-%d:%d\n", i, lowest);
		printf("\n");*/
		ans += lowest;
	}
}

int main(){
	scanf("%d", &n);
	while(n){
		edge = n * (n-1) / 2;
		int i, j;
		int at, bt, zt;
		memset(m, 0x3f, sizeof(m));
		for(i = 1; i <= edge; i++) m[i][i] = 0;
		for(i = 1; i <= edge; i++){
			scanf("%d%d%d", &at, &bt, &zt);
			m[at][bt] = zt;
			m[bt][at] = zt;
		}

		/*for(i = 1; i <= n; i++){
			for(j = 1; j <= n; j++){
				printf("%d ", m[i][j]);
			}
			printf("\n");
		}
*/
		prim2();

		printf("%d\n", ans);
		scanf("%d", &n);
	}
}
