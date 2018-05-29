#include <stdio.h>
#include <algorithm>
#include <memory.h>
#include <queue>
#define MS 200050

using namespace std;

int main(){
	int n, k;

	int a[MS];
	int b[MS];
	while(scanf("%d%d", &n, &k) == 2){
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		int i;
		for(i = 0 ; i < n; i++)	scanf("%d", &a[i]);
		for(i = 0; i < n; i++) scanf("%d", &b[i]);

		int ans = 0;

		int j, allzero = 0, maxAllzero;
		int l = 0;
		queue <int> q;
		for(i = 0; i < n; i++){
			if(b[i] == 1){
				ans+=a[i];
			}
			else{
				l = i;
				allzero += a[i];
				maxAllzero = allzero;
				break;
			}	
		}
		i++;
		for(; i < n; i++){
			if(b[i] == 1){
				ans+=a[i];
			}
			else{
				q.push(i);
				allzero += a[i];
				while(i - l+1 > k){
					allzero -= a[l];
					l = q.front();
					q.pop();
				}
				maxAllzero = max(allzero, maxAllzero);		
			}
		}
		ans += maxAllzero;
		printf("%d\n", ans);
	}
}
