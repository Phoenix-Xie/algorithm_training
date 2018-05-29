#include <stdio.h>
#include <memory.h>
using namespace std;
#define MS 1010
int main(){
	int n, m;
	int a[MS];
	while(scanf("%d%d", &n, &m) == 2){
		int i;
		int t;
		memset(a, 0, sizeof(a));
		for(i = 0; i < m; i++){
			scanf("%d", &t);
			a[t]++;
		}
		int minnum = a[1];
		for(i = 1; i <= n; i++){
			if(a[i] < minnum){
				minnum = a[i];
			}
		}
		printf("%d\n", minnum);
	}
}
