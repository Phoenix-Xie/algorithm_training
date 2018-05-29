#include<iostream>
#define LL long long
using namespace std;
int main(){
	LL T, i;
	cin >> T; 
	
	for(i = 1; i <= T; i++){
		LL n;
		cin >> n;
		cout << "Case #" << i << ": " << n-1 << ".0000000000" << endl;
	}
	return 0;
}
