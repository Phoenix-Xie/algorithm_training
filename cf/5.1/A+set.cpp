#include <bits/stdc++.h>
#define MS 
#define ll long long 

using namespace std;

set < set<char> > root;
int main(){
	ll n;
	cin >> n;
	string s;
	for(ll i = 0; i < n; i++){
		cin >> s;
		set <char> t;
		for(ll j = 0; j < s.size(); j++){
			t.insert(s[j]);
		}
		root.insert(t);
	}
	cout << root.size() << endl;
}
