#include <bits/stdc++.h>
#define ll long long
#define Fup(A,B,C) for(C = A; C <= B; C++)
#define Fdown(A, B, C) for(C = A; C >= B; C--)
const ll MS = 1010; 
const ll INF = 0x3f3f3f3f;
const ll MOD = 1000000007;
using namespace std;

vector <ll> v[MS];
int main(){
	ll n, m, a, b, i, j;
	cin >> n >> m;
	Fup(1,m,i){
		cin >> a >> b;
		v[a].push_back(b);
	}
	Fup(1,n,i){
		cout << v[i].size() << " ";
	}
	cout << endl;
	Fup(1,n,i){
		Fup(0,(ll)v[i].size()-1,j){
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
}
