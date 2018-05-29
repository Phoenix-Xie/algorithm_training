#include <iostream>
#include <algorithm>
#include <memory.h>
#define LL long long
#include <string>
#define MS 2020
using namespace std;

struct Line{
	LL r;
	LL l;
	bool operator < (const struct Line & a){
		if(l == a.l)
			return r < a.r;
		else
			return l < a.l ;
	}
}L[MS];
struct statu{
	LL v;
	LL r;
	bool operator < (const struct statu & a){
		return v < a.v;
	}
}f[2][MS], t;
int main(){
	LL T;
	cin >> T;
	for(LL case_num = 1; case_num <= T; case_num++){
		LL i, j;
		LL n, m, k;
		cin >> n >> m >> k;

		for(i = 1; i <= m; i++)
			cin >> L[i].l >> L[i].r;

		sort(L+1, L+m+1);
		memset(f, 0 ,sizeof(f));

		for(i = 1; i <= m; i++){
			for(j = 1; j <= min(i, k); j++){
				t.v = f[0][j-1].v + L[i].r - max(f[0][j-1].r, L[i].l-1);
				t.r = L[i].r; 
				f[1][j].v = max(f[0][j].v ,max(t.v, f[1][j-1].v));
				if(f[1][j].v == f[0][j].v){
					f[1][j].r = f[0][j].r;
				}
				else if(f[1][j].v == t.v){
					f[1][j].r = t.r;
				}
				else{
					f[1][j].r = f[1][j-1].r;
				}
				//cout << f[1][j].v; 
			}
			for(j = 1; j <= k; j++){
				f[0][j] = f[1][j];
			}
			//cout << endl;
		}
		cout << "Case #" << case_num << ": " << f[1][k].v << endl;
	}
}
