/*
HDU - 1527
取石子游戏

*/

#include <bits/stdc++.h>
#define ll long long
#define MS 10010
#define INF 0x3f3f3f3f
#define MOD 1000000007
using namespace std;
bool wythoff(ll a, ll b){
	const double judge = (sqrt(5)+1.0)/2.0;
	ll k = b - a;
	if(int(judge * k) == a) return false;
	else return true;
}
int main(){
	ll a, b;
	cin >> a >> b;
	const double judge = (sqrt(5)+1.0)/2.0;

	

	ll k = b-a; 
	if(int(judge * k) == a) cout << "0" << endl;
	else cout << "1" << endl;
}
