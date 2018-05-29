#include <iostream>
#include <cstdio>
#define ll long long
using namespace std;

int main(){
	char s[4];
	cout << "Enter a number:"; 
	cin >> s;
	ll a[4];
	for(ll i =0 ; i< 4; i++){
		a[i] = s[i]-'0';
		a[i] += 9;
		a[i] = a[i]%10;
	}
	cout << "The encrypted number is ";
	cout << a[2] << a[3] << a[0] << a[1] << endl;
}
