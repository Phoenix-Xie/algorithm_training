#include <iostream>
#include <algorithm>
#define LL long long
#define MS 1e9+7

using namespace std;

int main(){
	LL T;
	cin >> T;
	while(T--){
		LL k, m, ans;
		cin >> k >> m;
		ans = 0;
		LL n = k+1;
		if(n*(n+1)%6 == 0)
			ans = (n*(n+1)/6%m)*((n+2)%m)%m;
		if(n*(n+2)%6 == 0)
			ans = ((n*(n+2)/6%m)*((n+1)%m))%m;
		if((n+1)*(n+2)%6 == 0)
			ans = (((n+2)*(n+1)/6%m)*(n%m))%m; 
		cout << ans <<endl;
	}
}
