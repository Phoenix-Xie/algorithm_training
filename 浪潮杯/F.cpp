#include <bits/stdc++.h>
#define MS 10
#define ll long long

using namespace std;

bool isSquare(ll N, ll * time){
	ll i;
	if(N == 0){
		*time = 0;
		return true;
	}
	for(i = 1; N > 0; i+= 2){
		N-=i;
	}
	*time = (i+1)/2;
	if(N == 0) return true;
	else return false;
}
int main(){
	ll T;
	cin >> T;
	ll a, b, c;
	while(T--){
		cin >> a >> b >> c;
		ll time;
		if(b*b - 4*a*c < 0)
			cout << "NO" << endl; 
		if(isSquare(b*b-4*a*c, &time)){
			//cout << "time" << time << endl;
			if(a == 0){
				if(b == 0){
					cout << "YES" << endl;
				}
				else{
					if(!c%b)
						cout << "YES" <<endl;
					else
						cout << "NO" << endl; 
				}
			}
			else if(!((-b+time) % (2*a)) && !((-b-time)%(2*a))){
				cout << "YES" << endl;
			}
			else
				cout << "NO" << endl;
		}
		else
			cout << "NO" << endl;
	}
}
