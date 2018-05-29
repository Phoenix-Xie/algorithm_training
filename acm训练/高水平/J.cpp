#include <iostream>
#include <algorithm>
#define ll long long
#define MS 10010

using namespace std;

int mian() {
	ll v, m, i, j;
	ll a[MS];
	double b[MS];
	cin >> v >> m;
	for (i = 1; i <= m; i++) {
		cin >> a[i] >> b[i];
	}

	double dp[MS];
	for (i = 0; i < MS; i++) dp[i] = 1.0;
	for (i = 1; i <= m; i++) {
		for (j = v; j >= a[i]; j--) {
			dp[j] = min(dp[j], dp[j - a[i]]*(1-b[i]));
		}
	}
	double ans = 0;
	for (i = 1; i <= v; i++) ans = min(ans, dp[i]);
	cout << ans << "%" << endl;
	return 0;
}

