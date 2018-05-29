#include <iostream>
#define ll long long
#define MS 1000010
using namespace std;

char s[MS];
int main(){
	cin >> s;
	ll ans = 0;
	ll len;
	for(len = 0; s[len] != '\0'; len++);
//	cout << len << endl;
	ll index;
	for(ll i = len-1; i >= 0; i--){
		if(s[i] == '0') ans++;
		else{
			index = i;
			break;
		}
	}
	if(index == 0){
		cout << ans << endl;
		return 0;
	}
	ans += 1;

	for(ll i = 0; i <= index; i++){
		if(s[i] == '1') ans++;
		else ans += 2;
		//cout << ans << endl;
	}
	cout << ans << endl;
	return 0;
}
