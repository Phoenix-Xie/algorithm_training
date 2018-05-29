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
	ll score;
}pt;
struct team{
	string name1;
	string name2;
	ll score1;
	ll score2;
	ll count1;
	ll count2;
}a[MS];
int main(){
	ll n, m, i ,j;
	people pt;
	cin >> n >> m;
	memset(a, 0, sizeof(a));
	Fup(1,n,i){
		ll x;
		cin >> pt.name >> x >> pt.score;
		if(pt.score > a[x].score1){
			a[x].name1 = pt.name;
			a[x].score1 = pt.score;
			a[x].count1 = 0;
		}
		else if(pt.score == a[x].score1){
			a[x].count1++;
		}
		else if(pt.score > a[x].score2){
			a[x].name2 = pt.name;
			a[x].score2 = pt.score;
			a[x].count2 = 0;
		}
		else if(pt.score == a[x].score2){
			a[x].count2++;
		}
		else{
			continue;
		}
	}
	Fup(1,n,i){
		if(a[i].count1 == 0 && a[i].count2 == 0){
			cout << a[i].name1 << " " << a[i].name2 << endl;
		}
		else{
			cout << "?" << endl;
		}
	}
}
