#include <bits/stdc++.h>
#define ll long long
#define MS 10010
#define INF 0x3f3f3f3f
#define MOD 1000000007
using namespace std;

int main(){
	ll a, b, i, j;
	cin >> a >> b;
	while(a != 0 || b != 0){
		const double judge = (sqrt(5)+1.0)/2.0;

		if(a > b){
			ll t = a;
			a = b;
			b = t;
		}

		ll k = b-a; 
		if(int(judge * k) == a) cout << "0" << endl;
		else{
			cout << "1" << endl;
			ll at, bt;
			for(i = k; i >= 0; i--){
				at = int(judge * i);
				bt = at+i;
				if(a - at == b - bt){
					cout << at << " " << bt << endl;
					break;
				}
			}

			at = int(judge * k);
			if(a > at){
				for(j = k; j == i; j--);
				at = int(judge*j);
				cout << at << " " << at+j << endl;
			}
			else{
				for(j = k-1; j == i; j--);
				at = int(judge*j);
				cout << at << " " << at+j << endl;
			}
		}
		cin >> a >> b;
	}
}
