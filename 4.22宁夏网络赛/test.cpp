#include <iostream>
#include <algorithm>
#define LL long long
#define MS 100

using namespace std;

int main(){
	LL n, i, j;
	char m[MS][MS]; 
	cin >> n;
	n--;
	for(i = 0 ; i <= n; i++){
		cin >> m[i];
	}
	cout <<endl;
	for(i = 0; i <= n; i++){
		for(j = 0; j <= n; j++){
			cout << m[n-j][i];
		}
		cout << endl;
	}
}
