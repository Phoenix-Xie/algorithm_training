#include <iostream>
#include <algorithm>
#include <memory.h>
#define LL long long
#define MS 10000
using namespace std;
LL T;
LL n, m;
LL a, b;
LL p[MS] = {0};
LL head[MS] = {0};
LL next_p[MS] = {0};
LL point[MS] = {0};
LL odd, even;
LL start_odd;
LL v[MS] = {0};
LL tot = 0; 
void add(LL a, LL b){
	point[++tot] = b;
	next_p[tot] = head[a];
	head[a] = tot;
}
void dfs(int x){
	v[x] = 1;
	for(LL k = head[x]; k ; k = next_p[x]){
		x = point[k];
		if(!v[x]){
			dfs(x);
		}
	}
}
int main(){
	cin >> T;
	while(T--){
		memset(p, 0, sizeof(p));
		cin >> n >> m;
		for(LL i = 1; i <= m; i++){
			cin >> a >> b;
			p[a]++;
			p[b]++; 
			add(a,b);
			add(b,a);
		}
		even = 0;
		odd = 0;
		LL flag = 0;
		LL ji
		for(LL i = 1; i <= n; i++){
			if(p[i] == 0){
				flag = 1;
				break;
			}
			if(p[i]%2 == 0)
				even++;
			else	{
				odd++;
				start_odd = i;
				
			}
			if(ji > 2){
				flag = 1;
				break;
			}
		}
		if(ji != 2)
			flag = 1;
		if(flag){
			cout << "Xun" << endl;
			continue;
		}
		dfs(1);
		for(LL i = 1; i <= n; i++){
			if(!v[i])
				flag = 1;
		}
		if(flag)
			cout << "Xun" << endl;
		else
			cout <<"Zhen" << endl;
	}
}
