#include <iostream>
#include <algorithm>
#include <memory.h>
#include <stack>
#define LL long long
#define MS 100

using namespace std;
LL T, n;
stack <LL> sx;
stack <LL> sy;
stack <LL> sd;

LL d[4];
char m[MS][MS]; 
LL sta = 0;
LL out_flag = 0;
LL xx[] = {0, 0, 1, -1};
LL yy[] = {1, -1, 0, 0};
LL v[MS][MS] = {0};
LL check_out(LL x, LL y){
	if(x == 0 || x == n || y == 0 || y == n){
		return 1;
	}
	return 0;
}
LL countd(LL x, LL y, LL ans[]){
	LL maxd = 0, dt[4] = {0}, index = 0;
	dt[0] = d[0] + m[x][y];
	dt[1] = d[1] + m[n-y][x];
	dt[2] = d[2] + m[n-x][n-y];
	dt[3] = d[3] + m[y][n-x];
	for(LL i = 0; i < 4; i++){
		if(maxd < dt[i]){
			maxd = dt[i];
			index = i;
		}
	}
	ans[0] = maxd;
	ans[1] = index;
};

LL dfs(LL x, LL y, LL d[]){
	for(LL i = 0; i < 4; i++){
		LL xt = x + xx[i];
		LL yt = y + yy[i];
		LL ans[2];
		countd(xt, yt, ans);
		LL count = ans[0];
		if(count <= sta){
			if(check_out(xt, yt)){
				out_flag = 1;
				break;
			}
			d[ans[1]]++;
			dfs(xt, yt, d);
		}
		else{
			v[xt][yt] = count;
			sx.push(xt);
			sy.push(yt);
			sd.push(count);
		}
	}
}

int main(){
	cin >> T;
	while(T--){
		cin >> n; //n储存的是具体行数-1，两行的话n为1
		n--;
		for(LL i = 0 ; i <= n; i++){
			cin >> m[i];
		}
		out_flag = 0;
		sta = 0;
		memset(v, 0, sizeof(v));
		memset(d, 0, sizeof(d));
		dfs(n/2, n/2, d);
		sta++;
		while(!sx.empty() && !out_flag){
			LL xt = sx.top();
			LL yt = sy.top();
			if(sd.top() > sta){
				sta++;
			}
			sd.pop();
			sx.pop();sy.pop();

			dfs(xt, yt, d);
		}
		if(m[n/2][n/2] == 1)
			sta++;
		cout << sta << endl;
	}
}
