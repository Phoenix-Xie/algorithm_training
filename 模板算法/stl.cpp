#include <bits/stdc++.h>
#define ll long long
#define Fup(A,B) for(i = A; i <= B; i++)
#define Fdown(A, B) for(i = A; i >= B; i--)
const ll MS = 1010; 
const ll INF = 0x3f3f3f3f;
const ll MOD = 1000000007;
using namespace std;

int main(){
	ll N, T, j , i, a[MS] = {0,1,2,3,4,4,4,5,6,7,1};
	cin >> T;
	while(T--){
		//cin >> N;
		N = 10;
		//Fup(1,N) cin >> a[i];
		Fup(1, N) cout << a[i] << " ";
		cout << endl;
		sort(a+1, a+N+1);
		Fup(1, N) cout << a[i] << " ";
		Fup(1, N){
			ll x;
			cin >> x;
			ll * p = lower_bound(a+1,a+N+1, x);
			cout << i << ":" << p-a << "," << *p << endl;
			p = upper_bound(a+1, a+N+1, x);
			cout << i << ":" << p-a << "," << *p;
		}
	}
}
