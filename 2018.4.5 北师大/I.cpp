#include <stdio.h>
#include <memory.h>
#include <bitset>
#define MS 1000050

using namespace std;
int n;
int b[MS], d[MS];

int lowbit(int x){
	return x & -x;
}

int query(int x){
	int res = 0;
	while(x){
		res += b[x];
		x -= lowbit(x);
	}
	return res;
}

void insert(int x, int value){
	while(x < n){
		b[x]+=value;
		x += lowbit(x);
	}
}
int main(){
	int k;
	int T;
	scanf("%d", &T);
	while(T--){
		scanf("%d%d", &n, &k);
		memset(d, 0, sizeof(d));
		memset(b, 0, sizeof(b));
		int now = 0, i;
		char c[MS];
		scanf("%s", c);
		for(i = 0; i < n; i++){
			if(c[i] == 'D')
				insert(i+1, 1);
			else
				now += query(i);
		}

		printf("%d\n", now);

		int flag = 0, j = 0;
		int index = 0, countm = 0;
		if(k < now){
			for(i = n-1; i >= 0; i--){ //从n-1往后扫描
				if(c[i] == 'M') countm++;
				else{
					d[index] = countm;
					index++;
				}
			}
			//d中数据递增

			for(i = index-1; i >= 0; i--){
				now -= d[i];
				j++;
				if(now <= k){
					flag = 1;
					break;
				}
			}
		}
		else if(k > now){
			for(i = 0; i < n; i++){ //从0往前扫描
				if(c[i] == 'M') countm++;
				else{
					d[index] = countm;
					index++;
				}
			}
			//d中数据递增

			for(i = index-1; i >= 0; i--){
				now += d[i];
				j++;
				if(now >= k){
					flag = 1;
					break;
				}
			}
		}
		else{
			flag = 1;
			j = 0;
		}

		if(flag)
			printf("%d\n", j);
		else
			printf("-1\n");
	}
}
