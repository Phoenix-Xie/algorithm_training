#include <stdio.h>
#include <algorithm>
#include <bitset>
#include <queue>
#define MS 100 //最大点数
using namespace std;

priority_queue <int> q[MS];
int b[MS];
int n; //点数量
int a[MS][MS]; //邻接表
bool operator < (int a, int b){
	return a > b;
}
Prim(){
	int t;
	bitset <MS> v;
	memset(b, 0x3f, sizeof(b));
	q.push(1);
	b[1] = 0; //设置1点为起始点，数值为0
	while(!q.empty()){
		t = q.front();
		q.pop();
		v[t] = 1;
		for(int i = 1; i <= n; i++){
			if(!v[i]){
				b[i] = min(b[i], b[t] + a[t][i]);
			}
		}
	}
	return b[t];
}

int main(int argc, char const *argv[])
{
	scanf("%d", &n);
	while(n){
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				scanf("%d", &a[i][j]);
			}
		}
		printf("%d\n", Prim());
		scanf("%d", &n);
	}
	
	return 0;
}