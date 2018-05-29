#include <iostream>
#include <cstdio>
#define ll long long
using namespace std;

int main(){
	char s[100000];
	cin >> s;
	char flag = '0';
	ll ans = 0;
	ll count = 0;
	for(ll i = 0; s[i] != '\0'; i++){
		if(s[i] == flag){
			count++;
		}
		else{
			flag = s[i];
			count = 1;
		}
		if(count >= 7){
			ans = 1;
			break;
		}
	}
	if(ans) cout << "YES" << endl;
	else cout << "NO" << endl;
}
