#include <bits/stdc++.h>
#define MS 110
#define ll long long 
using namespace std;

struct Person{
	string name;
	ll taxi;
	ll girl;
	ll piza;
}p[MS];

int main(){
	ll n;
	cin >> n;
	ll i , j, m;
	char s[10];
	ll a[3] = {0};
	for(i = 0; i < n; i++){
		p[i].taxi = 0;
		p[i].girl = 0;
		p[i].piza = 0;
		cin >> m >> p[i].name;
		for(j =  0; j < m; j++){
			cin >> s;
			ll a1, a2;
			a1 = s[0];
			a2 = s[1];
			ll flag = 0;
			if(a1 == a2){
				flag = 1;
				for(ll c = 2; c < 8; c++){
					if(s[c] == '-') continue;
					if(s[c] != a1){
						flag = 0;
						break;
					}
				}
			}
			else if(a1 > a2) {
				flag = 2;
				for(ll c = 2; c < 8; c++){
					if(s[c] == '-') continue;

					a1 = a2;
					a2 = s[c];
					// if(i == 0)
					// 	cout << a1-'0' << " " << a2-'0' << endl;
					if(a1 <= a2){
						flag = 0;
						break;
					}
				}
			}
			switch(flag){
				case 1: p[i].taxi++; break;
				case 2: p[i].piza++; break;
				case 0: p[i].girl++; break;
			}
		}
		a[0] = max(a[0], p[i].taxi);
		a[1] = max(a[1], p[i].piza);
		a[2] = max(a[2], p[i].girl);
	}
	
	// for(i = 0; i < n; i++){
	// 	cout << p[i].name << endl;
	// 	cout << p[i].taxi << ' ' << p[i].piza << " " << p[i].girl << endl;
	// }


	string name[100];
	ll index;
	cout << "If you want to call a taxi, you should call: ";
	index = 0;
	for(i =0 ; i < n; i++){
		if(p[i].taxi == a[0]){
			name[index++] = p[i].name;
		}
	}
	for(i = 0; i < index; i++){
		cout << name[i];
		if(i != index-1){
			cout << ", ";
		}
		else
			cout << "." << endl;
	}
	cout << "If you want to order a pizza, you should call: ";
	index = 0;
	for(i =0 ; i < n; i++){
		if(p[i].piza == a[1]){
			name[index++] = p[i].name;
		}
	}
	for(i = 0; i < index; i++){
		cout << name[i];
		if(i != index-1){
			cout << ", ";
		}
		else
			cout << "." << endl;
	}
	cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
	index = 0;
	for(i =0 ; i < n; i++){
		if(p[i].girl == a[2]){
			name[index++] = p[i].name;
		}
	}
	for(i = 0; i < index; i++){
		cout << name[i];
		if(i != index-1){
			cout << ", ";
		}
		else
			cout << "." << endl;
	}

}