#include <iostream>
#include <algorithm>
#define LL long long
#define MS 1010

using namespace std;

int main(){
	LL T;
	LL i;
	cin >> T;
	for(i = 1; i <= T; i++){
		LL ans = 0;
		LL x, y, n;
		cin >> x >> y >> n;
		if(x > y)
			ans = n;
		else{
			ans = 11*n*x / (11*y+2*x);
		}


		cout << "Case #" << i << ": "<< ans << endl;
	}
}
