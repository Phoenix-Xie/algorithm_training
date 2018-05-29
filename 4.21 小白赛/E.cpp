#include <iostream>
#include <algorithm>
#define LL long long
#define MS 100100
using namespace std;
LL n, q;
LL a[MS];
LL ans;
LL x, num;
int main(){
	cin >> n >> q;
	for(LL i = 1; i <= n; i++){
		cin >> a[i];
		ans ^= a[i];
	}
	for(LL i = 1; i <= q; i++){
		cin >> x >> num;
		ans ^= a[x];
		ans ^= num;
		a[x] = num;
		if(ans == 0)
			cout << "Li" << endl;
		else
			cout << "Kan" << endl;
	}
}