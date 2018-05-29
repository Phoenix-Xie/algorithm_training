#include <iostream>
#include <algorithm>
#include <memory.h>
#define LL long long 
#define MS 100010
using namespace std;
LL v[MS];
LL find(LL x){
	if(v[x] == x)
		return x;
	else
		return find(v[x]);
}
LL in(LL x,LL index,LL  ans[]){
	LL flag = 0;
	for(LL i = 0; i < index; i++){
		if(ans[i] == x)
			flag = 1;
	}
	return flag;
}
int main(){
	LL n ,m;
	cin >> n >> m;
	for(LL i = 0; i < MS; i++){
		v[i] = i;
	}
	LL a, b;
	for(LL i = 0; i < m; i++){
		cin >> a >> b; 
		v[a] = b;
		if(v[b] == a){
			if(a < b){
				v[a] = a;
			}
			else
				v[b] = b;
		}
	}
	for(LL j = 0; j < n; j++){
			cout << v[j];
	}
	LL nowroot = find(1);
	LL ans[MS], index = 0;
	ans[index] = find(1);
	index++;
	for(LL i = 1; i <= n; i++){
		if(!in(find(i), index, ans)){
			ans[index] = find(i);
			nowroot = find(i);
			index++;
		}
	}
	cout << index << endl;
	for(LL i = 0; i < index; i++){
		cout << ans[i] << " ";
	}
}
