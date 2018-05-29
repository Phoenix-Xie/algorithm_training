//20:27
#include <bits/stdc++.h>
#define ll long long
#define MS 1010

using namespace std;
map<string,int> a;
char
int main(){
	ll n, i, j;
	cin >> n;
	char s[MS];
	bitset <25> v;
	for(i = 0; i < n; i++){
		cin >> s;
		memset(v, 0, sizeof(v));
		for(j = 0; s[j] != '\0'; j++){
			ll t = s[j] - 'a';
			if(!v[t]){
				v[t] = 1;
			}
		}
		char s[25] = {0};
		ll index = 0;
		for(j = 0; j < 25; j++){
			if(v[j]){
				char t = 'a' + j;
				s[index++] = t;
			}
		}
		s[index] = '\0';
		if(map[s])
	}	
}
