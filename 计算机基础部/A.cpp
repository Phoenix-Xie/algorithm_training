#include <iostream>
#include <cstdio>
#define ll long long
using namespace std;
int main(){
	ll a, b;
	cout << "Enter num1:"; 
	cin >> a;
	cout << "Enter num2:";
	cin >> b;
	cout << a << "+" << b << "=" << a+b<<endl;
	cout << a << "-" << b << "="<< a-b << endl;
	cout << a << "*" << b << "="<< a*b << endl;
	printf("%d/%d=%.2lf\n",a, b, double(a)/double(b));
	cout << a << "%" << b << "="<< a%b << endl;
}
