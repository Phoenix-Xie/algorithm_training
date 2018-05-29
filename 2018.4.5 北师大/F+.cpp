#include <stdio.h>
#include <algorithm>
#include <memory.h>
#include <bitset>
#define MS 100010

using namespace std;

int map[MS][MS];
int d[MS];
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int n, m;
		scanf("%d%d", &n, &m);
		int i, x, y, z;
		memset(d, 0, sizeof(d));
		memset(map, 0 , sizeof(map));
		for(i = 0; i < m; i++){
			scanf("%d%d%d", &x, &y, &z); 
			map[x][y] = z;
			map[y][x] = z;
			d[x] += z;
			d[y] += z;
		}
		bitset <MS> v;
		int maxd = 0, j;
		d[0] = 0x3f3f3f;
		for(i = 1; i <= n; i++){
			int x = 0;
			for(j = 1; j <= n; j++){
				if(!v[j] && d[j] < d[x]){
					x = j;
				}
			}
			v[x] = 1;
			maxd = d[j];
			for(j = 1; j <= n; j++){
				d[j] -= map[j][x];
			}
		}
		printf("%d\n", maxd);
	}
}
