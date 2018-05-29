#include <stdio.h>
#include <queue>
#include <memory.h>
#define MS 210
using namespace std;

struct point{
	int x;
	int y;
	int t;
	bool stop;
}pt;
queue <point> q;
int N, M;
int xxx[] = {0, 1, 0, -1};
int yyy[] = {1, 0, -1, 0};
char m[MS][MS];
bool v[MS][MS];
int check(int x, int y){
	if(v || x < 0 || x >= N || y < 0 || y >= M || m[x][y] == '#')
	return 0;
return 1;
}

int bfs(int rx, int ry){
	memset(v, 0 ,sizeof(v));
	pt.x = rx;
	pt.y = ry;
	pt.t = 0;
	pt.stop = false;
	int xx, yy, tt;
	q.push(pt);
	while(!q.empty()){
		pt = q.front();
		q.pop();
		v[pt.x][pt.y] = 1;
		if(pt.stop){
			pt.stop = false;
			pt.t++;
			q.push(pt);
			continue;
		}
		for(int i = 0; i < 4; i++){
			xx = pt.x + xxx[i];
			yy = pt.y + yyy[i];
			if(check(xx, yy)){
				pt.stop = false;
				if(m[xx][yy] == 'x'){
					pt.stop = true;
				}
				pt.t++;
				pt.x = xx;
				pt.y = yy;
				q.push(pt);
				if(m[pt.x][pt.y] == 'a'){
					return pt.t;
				}
			}
		}
	}
}


int main(){
	while(scanf("%d%d", &N, &M));
	int i, j;
	
	for(i = 0; i < N; i++) scanf("%s", m[i]);
	
	int rx, ry, flag = 0;
	for(i = 0; i < N; i++){
		for(j = 0; j < M; j++){
			if(m[i][j] == 'r'){
				rx = i;
				ry = j;
				flag = 1;
				break;
			}
		}
		if(flag) break;
	}
				
	int ans = bfs(rx, ry);
	printf("%d\n", ans);
}
