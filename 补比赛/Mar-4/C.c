#include <iostream>
#include <memory.h>
#define LL long long
#define MS 
using namespace std;
struct point {
	LL next;
	LL h;
	operator < (struct point a){
		return h < a.h;
	}
}p[MS], t;
LL a[MS];
int main(){
	LL n;
	memset(a, 0, sizeof(a));
	cin >> n;
	for(LL i= 0; i < n; i++){
		cin >> p[i].next;
	}
	for(LL i = 0; i < n; i++){
		t = p[i];
		LL c = 0;
		while(t.next != 1){
			t = t.next;
			c++;
		}
		p[i].h = c;
		a[c]++;
	}
	LL ans = 0;
	for(LL i = 0; i < n; i++){
		ans+= (a[c]%2);
	}
	cout << ans << endl;
}