#include <bits/stdc++.h>
#define MS 110
#define ll long long 
using namespace std;
ll a1, a2, b1, b2;
ll r1, r2,c1,c2,d1,d2;
bool check_equal(){
	if(a1 == a2 || a2 == b1 || b1 == b2 || b2 == a1 || a1 == b1 || a2 == b2)
		return true;
	else return false;
}
bool check_out(){
	if(a1 <= 0 || a1 > 9 || a2 <= 0 || a2 > 9 || b1 <= 0 || b1 > 9 || b2 <= 0 || b2 > 9){
		return true;
	}
	else return false;
}
bool check(){
	a2 = r1 - a1;
	b1 = c1 - a1;
	b2 = r2 - c1 + a1;
	if(check_equal()){
		return false;
	}
	if(check_out()){
		return false; 
	}
	if(a2+b2 != c2) return false;
	if(a1+b2 != d1) return false;
	if(a2+b1 != d2) return false;
	if(a1+a2 != r1) return false;
	if(b1+b2 != r2) return false;
	if(a1+b1 != c1) return false;

	return true;
}
int main(){

	cin >> r1 >> r2;
	cin >> c1 >> c2;
	cin >> d1 >> d2;
	ll flag = 0;
	for(a1 = 1; a1 <= 9; a1++){
		if(check()){
			flag = 1;
			break;
		}
	}
	if(flag){
		cout << a1 << " " << a2 << endl;
		cout << b1 << " " << b2;
	}
	else cout << -1;
}
