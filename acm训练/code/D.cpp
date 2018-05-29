#include <bits/stdc++.h>
#define MS 1010
#define ll long long

using namespace std;

int main(){
	char s[MS];
	ll i, j;
	cin >> s;
	ll minu = 0;
	if(s[0] == '-'){
		minu = 1;
	}
	ll c = 0;
	char ans[MS], ans_c = 0;
	for(i = minu; s[i] != '\0' && s[i] != '.'; i++){
		if(c && c%3 == 0){
			ans[ans_c++] = ',';
		}
		c++;
		ans[ans_c++] = s[i];
	}
	if(s[i] == '.'){
		ans[ans_c++] = '.';
		ans[ans_c++] = s[i+1];
		if(s[i+1] == '\0'){
			ans[ans_c++] = '0';
		}
		else
			ans[ans_c++] = s[i+1];
	}

	if(minu)
		cout << "(";
	cout << "$";
	for(i = 0; i < ans_c; i++){
		cout << ans[i];
	}

	if(minu)
		cout << ")";
}
