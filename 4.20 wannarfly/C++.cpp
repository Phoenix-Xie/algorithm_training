#include <iostream>
#include <algorithm>
#define LL long long
#define MS 10000
using namespace std;
LL stack[MS];
LL time = 0;
LL on_stack[MS] = {0};//当前树的祖先栈
LL st = 0;  //栈标
LL low[MS] = {0}; //low值(能够到达该点的最小值)
LL dfn[MS] = {0}; //时间戳 
LL scc_index = 0; //强连通数量
LL scc[MS] = {0}; //每个点归属的强连通根
LL head[MS] = {0};
LL next[MS] = {0};
LL point[MS] = {0};
LL tot = 0;
LL ans[MS] = {0};
LL ans_index = 0;
LL a, b;
LL n, m;
int printinfo(){
	cout << "low:";
	for(LL i = 0; i < n; i++){
		cout << low[i] << " ";
	}
	cout <<endl;
	cout << "dfn:";
	for(LL j = 0; j < n; j++){
		cout << dfn[j] <<" ";
	}
	cout <<endl;
}
void tarjan(int u){
	dfn[u] = low[u] = ++time;
	on_stack[u] = 1;
	stack[st++] = u;
	for(LL k = head[u]; k; k = next[k]){
		LL v = point[k]; //k指向位置
		if(!dfn[v]){
			tarjan(v);
			low[u] = min(low[v], low[u]);//回溯后以子点更新当前点
		}
		else if(on_stack[v] && dfn[v] < low[u]){
			low[u] = dfn[v];
		}//属于该子树并且dfn较小，为返祖边或横叉边
	}
	//在回溯中退栈找所有该子节点下的连通值
	printinfo();
	if(low[u] == dfn[u]){
		cout << "ans:" << u << endl;
		ans[ans_index++] = u;
		++scc_index;
		LL t = 0;
		while(t != u){ //stack[0] == u;
			t = stack[--st];
			scc[t] = scc_index;
			on_stack[t] = 0;
		}
	}
}

int printtable(){
	for(LL i = 1; i <= n; i++){
		cout << i << ":";
		for(LL k = head[i]; k ; k = next[k]){
			cout << point[k] << " ";
		}
		cout << endl;
	}
}
int main(){

	cin >> n >> m;
	for(LL i = 0; i < m; i++){
		cin >> a >> b;
		point[++tot] = b;
		next[tot] = head[a];
		head[a] = tot;
	}//构建邻接表
	printtable(); 
	for(LL i = 1; i <= n; i++){
		if(!dfn[i]) tarjan(i);
	}
	cout << scc_index << endl;
	sort(ans, ans+ans_index);
	for(LL i = 0 ; i < ans_index; i++){
		cout << ans[i] << " ";
	}
	cout << endl;

}
