#include <stdio.h>
#include <algorithm>
#define MS 1000000
using namespace std;

struct some{
	int x; //点1
	int y; //点2
	int z; //边长
}edge[MS];

int fa[110];

int getx(int x){
	if(fa[x] == x) return x;
	return fa[x] = getx(fa[x]);
}

bool operator < (struct some a, struct some b){
	return a.z < b.z;
}
bool operator > (struct some a, struct some b){
	return a.z > b.z;
}
int main(){
	int n, routs; //点数， 路数
	scanf("%d", &n);
	while(n){
		scanf("%d", &routs);
		int i, ans = 0;
		for(i = 1; i <= routs; i++)
			scanf("%d%d%d", &edge[i].x, &edge[i].y, &edge[i].z);
		sort(edge+1, edge+routs+1);

		for(i = 1; i <= n; i++) fa[i] = i;

		for(i = 1; i <= routs; i++){
			int x = getx(edge[i].x);
			int y = getx(edge[i].y);
			if(x == y) continue; //点已连接不计
			fa[x] = y; //点未连接连接
			ans += edge[i].z;
		}
		printf("%d\n", ans);
		scanf("%d", &n);
	}
}
