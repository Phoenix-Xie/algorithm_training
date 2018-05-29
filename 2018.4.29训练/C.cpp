#include <bits/stdc++.h>
#define ll long long 
#define Fup(A,B) for(i = A; i <= B; i++)
#define Fdown(A, B) for(i = A; i >= B; i--)
const ll MS = 1010; 
const ll INF = 0x3f3f3f3f;
const ll MOD = 1000000007;
using namespace std;

int main(){
	ll n ,a, b;
	cin >> n >> a >> b;
	ll t = (a+b)%n;
	if(t < 0)
		cout << n+t << endl;
	else if(t == 0)
		cout << n << endl;
	else 
		cout << t << endl;
}
