#include <iostream>
#include <algorithm>
#include <cstdio>
#define ll long long
#define MS 10010
#define MOD 100000007
using namespace std;

int main() {

	ll T;
	cin >> T;
	while (T--) {
		char s[MS];
		cin >> s;
		ll i, j;
		for (i = 0; s[i] != '\0'; i++) s[i] -= '0';
		ll len = i, sum = 0;

		if (len == 1)
			sum = 1;
		else
			for (i = 0; i <= s[0]; i++) {
				if (i > 2) break;
				ll flag = 1, ans = 1;
				ll dp[MS] = { 0 };
				dp[0] = i;
				dp[1] = s[0] - i;
				for (j = 2; j < len; j++) {
					dp[j] = s[j-1] - dp[j - 1] - dp[j - 2];
					if (dp[j] < 0 || dp[j] > 2) {
						flag = 0;
						break;
					}
				}
				if (flag) {
					for (j = 0; j < len; j++) {
						if (dp[j] == 1) {
							ans = ans * 2 % MOD;
						}
					}
					sum = (sum + ans) % MOD;
				}
			}
		cout << sum << endl;
	}

	return 0;
}
