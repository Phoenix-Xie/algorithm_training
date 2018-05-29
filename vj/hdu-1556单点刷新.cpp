#include <iostream>
#include <string>
#include <memory.h>
#define ll long long
#define MS 100010
#define INF 0x3f3f3f3f
#define MOD 1000000007
using namespace std;

ll N;
ll a[MS];
int main(){
	cin >> N;
	while(N){
		memset(a, 0 ,sizeof(a));
		ll i, j, x, y;
		for(i = 1; i <= N; i++){
			cin >> x >> y;
			a[x]++;
			a[y+1]--;
		}
		ll sum = 0;
		for(i = 1; i <= N; i++){
			sum+=a[i];
			cout << sum;
			if(i != N)
				cout << " ";
		}
		cout << endl;
		cin >> N;
	}
}
