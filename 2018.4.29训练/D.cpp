#include <bits/stdc++.h>
#define ll long long 
#define Fup(A,B,C) for(C = A; C <= B; C++)
#define Fdown(A, B, C) for(C = A; C >= B; C--)
const ll MS = 10010; 
const ll INF = 0x3f3f3f3f;
const ll MOD = 1000000007;
using namespace std;
struct people{
	string name;
	ll n;
	ll score;
};
vector <people> v[MS];
bool cmp(const people & people1, const people & people2){
	return people1.score > people2.score;
}
int main(){
	ll n, m, i ,j;
	people pt;
	cin >> n >> m;
	Fup(1,n,i){
		cin >> pt.name >> pt.n >> pt.score;
		v[pt.n].push_back(pt);
	}
	Fup(1,m,i){
		sort(v[i].begin(), v[i].end(), cmp);
		ll n = v[i].size();
		if(n == 2)
			cout << v[i][0].name << " " << v[i][1].name << endl;
		else if(v[i][1].score == v[i][2].score)
			cout << "?" << endl;
		else
			cout << v[i][0].name << " " << v[i][1].name << endl;
			
	}
}


/*
6  2
a 1 1
b 1 1 
c 1 1
d 1 4
e 2 3
f 2 3
*/