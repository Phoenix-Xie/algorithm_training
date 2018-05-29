#include <bits/stdc++.h>
#define ll long long 
#define Fup(A,B) for(i = A; i <= B; i++)
#define Fdown(A, B) for(i = A; i >= B; i--)
const ll MS = 1010; 
const ll INF = 0x3f3f3f3f;
const ll MOD = 1000000007;
using namespace std;

int main(){
	ll a[3];
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a+3);
	cout << a[2] - a[0];
}