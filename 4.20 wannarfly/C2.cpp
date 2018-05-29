#include <iostream>
#include <algorithm>
#define LL long long
#define MS 100100
using namespace std;
LL n, m, a, b; 
LL head[MS] = {0};
LL next_p[MS] = {0};
LL point[MS] = {0};
LL tot = 0;
LL v[MS] = {0};
LL in[MS] = {0}; //鍏ュ害璁＄畻
LL ans[MS] = {0};
LL ans_index = 0;
void dfs(LL x){
	v[x] = 1;
	for(LL k = head[x]; k; k = next_p[k]){
		x = point[k];
		if(!v[x]){
			v[x] = 1;
			dfs(x);
		}
	}
}
int main(){
	cin >> n >> m;
	for(LL i = 0; i < m; i++){
		cin >> a >> b;
		point[++tot] = b;
		next_p[tot] = head[a];
		head[a] = tot;
		in[b]++;
	}//鏋勫缓閭绘帴琛?
	for(LL i = 1; i <= n; i++){
		if(!in[i] && !v[i]){
			ans[ans_index++] = i;
			dfs(i);
		}
	}
	for(LL i = 1; i <= n; i++){
		if(!v[i]){
			ans[ans_index++] = i;
			dfs(i);
		}
	}
	cout << ans_index << endl;
	for(LL i = 0; i < ans_index; i++){
		cout << ans[i] << " ";
	}
}