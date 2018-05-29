#include <bits/stdc++.h>
#define MS 1010
#define ll long long

using namespace std;

int main(){
	char c[MS];
	ll a = 0, b = 0;
	cin >> c;
	for(ll i = 0; c[i] != '\0'; i++){
		if(c[i] == '-') a++;
		else b++;
	}
	if(b == 0) cout << "YES" << endl;
	else if(a % b == 0) cout << "YES" << endl;
	else cout << "NO" << endl;
}
