#include <stdio.h>
#define MS 310
#include <bitset>
#include <queue>
struct water{
	int n; //序号
	int v; //建水库代价
	bool operator < (const node &a) const { //priorit_queue 默认用<比较
        return v > a.v;
    }
}w[MS], wt;
int b[MS][MS]; // 建桥的代价
int n, t;
int count;
priorit_queue <struct water> p;
queue <int> num;
int search(int x){
	count = 0;
	bitset <MS> v;
	wt = p.top();
	p.pop();
	num.push(wt.n)
	while(!num.empty()){
		t = num.top();
		num.pop();
		count += w[t].v;
		v[t] = 1;

		for(i = 1; i <= n; i++){
			if(i == t) continue;
			if(v[i]) continue;
			if(b[t][i] <= w[i].v){
				queue.push(i);
				count += b[t][i];
			}
		}
	}

}
int main(){
	while(scanf("%d", &n) == 1){
		memset(w, 0x3f, sizeof(w));
		memset(p, 0x3f, sizeof(p));
		for(int i = 1; i <= n; i++) {
			scanf("%d", &w[i].v);
			w[i].n = i;
			p.push(w[i]);
		}
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				scanf("%d", &p[i][j]);
			}
		}
		printf("%d\n", search());
	}
}