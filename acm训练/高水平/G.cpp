#include <iostream>
#define ll long long
#define MS 1000

using namespace std;


ll len(char s[]){
	ll i;
	for(i = 0; s[i] != '\0'; i++);
	return i;
}
ll pow10(ll x){
	ll ans = 1;
	for(ll i = 0; i < x; i++){
		ans*= 10;
	}
	return ans;
}

ll changex(char s[]){
	ll i;
	for(i = 0; s[i] != '\0'; i++);
	i--;
	ll len = i;
	ll x= 0;
	for(;i >= 0; i--){
		x += pow10(len-i)*(s[i]-'0');
	}
	return x;
}

ll change(ll x, char s[]){
	ll i = 0;
	for(i = 0; x != 0; i++){
		s[i] = x%10;
		x/=10;
	}
	s[i] = '\0';
	return i;
}

ll check(ll x){
	char s[10];
	ll len = change(x, s);
	ll sum = 0, i;
	for(i = 0; i < len; i++){
		sum += s[i];
	}
	if(sum % 10 == 0){
		return true;
	}
	return false;
}

int main(){
	ll T;
	cin >> T;
	while(T--){
		char s[10];
		cin >> s;
		ll len_t = len(s);
		ll x = changex(s);
		ll i, ans;
		for(ans = x+1; !check(ans); ans++);
		ll len_now = change(ans, s);
		if(len_now < len_t){
			for(i = 0; i < len_t-len_now; i++) cout << 0;
		}
		cout << ans << endl;
	}
}
