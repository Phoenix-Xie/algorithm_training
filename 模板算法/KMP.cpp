#include <bits/stdc++.h>
#define ll long long
#define Fup(A,B,C) for(C = A; C <= B; C++)
#define Fdown(A, B, C) for(C = A; C >= B; C--)
const ll MS = 1010; 
const ll INF = 0x3f3f3f3f;
const ll MOD = 1000000007;
using namespace std;




ll len(const char s[]){
	ll i = 0;
	while(s[i] != '\0'){
		i++;
		//printf("???\n");
	}
	return i;
}

void prefix(const char P[], ll next[]){
	ll m = len(P);
	ll i;
	next[0] = 0;
	ll k = 0, q;
	for(q = 2; q <= m; q++){
		while(k > 0 && P[k] != P[q-1])
			k = next[k-1];
		if(P[k] == P[q-1])
			k++;
		next[q-1] = k;
	}
}

ll KMP(const char T[], const char P[]){
	ll c = 0;
	ll next[MS] = {0};
	ll n = len(T);
	ll m = len(P);
	prefix(P, next);
	ll q = 0;
	ll i;
	for(i = 1; i <= n; i++){
		while(q > 0 && P[q] != T[i-1]){
			q = next[q-1];
		}
		if(P[q] == T[i-1])
			q++;
		if(q == m){
			c++;
			q = 0;
		}
	}
	return c;
}



int main(){
	string a, b;
	cin >> a >> b;
	const char * c1 = a.c_str();
	const char * c2 = b.c_str();
	ll c = KMP(c1,c2);
	cout << c << endl;
}
