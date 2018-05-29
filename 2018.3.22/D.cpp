#include <stdio.h>
#define MS 1010
#include <queue>
queue <int> a[MS];

int dfs(){

}

int main(){
	int n, m, s, t;
	while(scanf("%d%d%d%d", &n, &m, &s, &t) == 4){
		int i, p1, p2;
		for(i = 0; i < MS; i++) a.push(0);
		for(i = 0 ; i < m; i++){
			scanf("%d%d", &p1, &p2);
			a[p1].push(p2);
			a[p2].push(p1);
		}
	}
}