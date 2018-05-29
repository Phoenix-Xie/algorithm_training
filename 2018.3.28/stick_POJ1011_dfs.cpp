#include <stdio.h>
#include <alogrithm>
#include <bitset>
#define MS 70
using namespace std;

int n, ans;
int a[MS]; //小木棍长度
int stickn;
bitset <MS> v;//使用标记
int stickn;
//共需要的木棍数量, 木棍长度
int dfs(int stick, int cab, int last){
	if(stick > stickn) return ture;
	if(cab == len) return dfs(stick+1, 0, 1);
	int fail = 0;
	for(int i = last; i <= n; i++)
		if(!v[i] && cab + a[i] <= len && fail != a[i]){
			v[i] = 1;
			if(dfs(stick, cab+a[i], i+1)) return true;
			//失败添加才会进入
			fail = a[i];
			v[i] = 0;
			if(cab == 0) return false; //若第一根就不行直接一路返回回去
			//失败结束
		}
	return false;
}
int main(){
	scanf("%d", &n);
	while(n){
		int i, sum = 0, cnt = 0, len;
		for(i = 0 ;i < n; i++) scanf("%d", &a[i]);

		sort(a,a+n);
		for(i = 0; i < n; i++) sum += a[i]; 
		for(len = 1; len <= 50; len++){
			if(sum % len) continue;
			stickn = sum / len;
			memset(v, 0, sizeof(v));
			cnt = 0;
			if(dfs(1,0,1)) break;
		}
		printf("%d\n", len);
		scanf("%d", &n);
	}

}