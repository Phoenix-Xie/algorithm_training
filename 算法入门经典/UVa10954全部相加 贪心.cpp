#include <queue>
#include <iostream>
#include <vector>
#include <functional>
#define ll long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	ll n;
	cin >> n;
	while (n) {
		priority_queue <int, vector<int>, greater<int> > q;
		ll i;
		int t;
		for (i = 0; i < n; i++) {
			cin >> t;
			q.push(t);
		}
		int a, b;
		ll ans = 0;
		for (i = 0; i < n - 1; i++) {
			a = q.top(); q.pop();
			b = q.top(); q.pop();
			ans += a + b;
			q.push(a+b);
		}
		cout << ans << endl;
		cin >> n;
	}
    return 0;
}