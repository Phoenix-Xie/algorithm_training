#include <bits/stdc++.h>
#define ll long long 
#define Fup(A,B,C) for(C = A; C <= B; C++)
#define Fdown(A, B, C) for(C = A; C >= B; C--)
const ll MS = 1010; 
const ll INF = 0x3f3f3f3f;
const ll MOD = 1000000007;
using namespace std;

int main(){

	ll N, i;
	char c = 0;
	ll word = 0;
	ll ans1 = 0, ans2 = 0;
	bool inP = false;
	cin >> N;
	Fup(1,N,i){
		cin >> c;
		if(c == '_'){
			if(inP){
				if(word){
					ans2++;
				}
			}
			else{
				ans1 = max(ans1, word);
			}
			word = 0;
		}
		else if(c == '('){
			inP = true;
			if(word){
				ans1 = max(ans1, word);
			}
			word = 0;
		}
		else if(c == ')'){
			inP = false;
			if(word)
				ans2++;
			word = 0;
		}
		else{
			word++;
		}
		//cout << word << endl;
	}
	if(word){
		if(inP)
			ans2++;
		else
			ans1 = max(ans1, word);
	}
	cout << ans1<< " " << ans2 << endl;
}

