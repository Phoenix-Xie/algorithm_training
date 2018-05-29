#include <iostream>
#define MS 1010
#define LL long long 
using namespace std;
int main(){
	LL T, N, j;
	cin >> T;
	for(j = 1; j <= T; j++){
		cin >> N;
		LL i;
		LL ans = 0, t;
		for(i = 0 ; i < N; i++){
			cin >> t;
			if(t % 10 != 0)
				ans++;
			t += (LL) (t/10);
			ans += t;
		}
		cout << "Case #" << j << ": " << ans << endl;
	}
	return 0;
}
