//计算1的个数
//如果1为0特判
//26min
#include <bits/stdc++.h>
#define ll long long 
#define MS 110

using namespace std;

int main(){
	ll n;
	cin >> n;
	ll i, j;
	ll t1 = 0, t0 = 0;
	char c;
	for(i = 0; i < n; i++){
		cin >> c;
		if(c == '1') t1++;
		if(c == '0') t0++;
	}
	if(t1 == 0){
		cout << 0 << endl;
	}
	else{
		cout << 1;
		for(i = 0; i < t0; i++) cout << 0;
		cout << endl;
	}
}