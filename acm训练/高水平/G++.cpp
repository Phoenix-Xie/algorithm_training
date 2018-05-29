#include <iostream>
#include <algorithm>
#define ll long long
#define MS 1000

using namespace std;

ll len;

ll count_sum(char s[]){
	ll sum = 0;
	for(ll i = 0; s[i] != '\0'; i++){
		sum += s[i] - '0';
	}
	return sum;
}

bool add(char s[]){
	s[0]++;
	for(i = 0; i <= len; i++){
		if(s[i] >= 10){
			s[i] %= 10;
			s[i+1]++;
		}
	}
	if(s[len] != '\0'){
		len++;
		s[len] = '\0';
	}
}

int main(){
	//cin.sync_with_stdio(false);
	ll T;
	cin >> T;
	while(T--){
		char s[10] = {0};
		cin >> s;

		for(len = 0; s[len] != '\0'; len++);
		reverse(s, s+len);
		
		add(s);
		ll sum = count_sum(s);
		while(sum%10 != 0){
			add(s);
			sum = count_sum(s);
		}
		reverse(s, s+len);
		cout  << s << endl
	}
}
