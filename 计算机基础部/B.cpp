#include <iostream>
#include <cstdio>
#define ll long long
using namespace std;

int main(){
	ll a, b;
	cin >> a >> b;
	ll flag = 0;
	ll d = 0;
	if((a%4==0 && a%100 != 0)|| a%400 == 0){
		cout << "Leap year,";
		flag = 1;
	}
	else{
		cout << "Common year,";
	}

	if(b <= 5 && b >= 3){
		cout << "Spring";
		switch(b){
			case 3:d = 31; break;
			case 4:d = 30; break;
			case 5:d = 31; break;
		}
	}
	else if(b <= 8 && b >= 6){
		cout << "Summer";
		switch(b){
			case 6:d = 30; break;
			case 7:d = 31; break;
			case 8:d = 31; break;
		}
	}
	else if(b <= 11 && b >= 9){
		cout << "Fall";
		switch(b){
			case 9:d = 30; break;
			case 10:d = 31; break;
			case 11:d = 30; break;
		}
	}
	else{
		cout << "Winter" ;
		switch(b){
			case 12:d = 31; break;
			case 1:d = 31; break;
			case 2:
				if(flag) d = 29;
				else d = 28;
			 	break;
		}
	}
	cout << "," << d << endl;
}
