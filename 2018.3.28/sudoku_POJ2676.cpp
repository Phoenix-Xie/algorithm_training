#include <stdio.h>
#include <bitset>
using namespace std;
int line[10];
int colum[10];
int maxti[10];
int m[11][11];
int point[90][2];
int addbit(int x, int & n){
	switch(x){
		case 1: 
			n = n & 0x1;
			break;
		case 2: 
			n = n & 0x2;
			break;
		case 3: 
			n = n & 0x4;
			break;
		case 4: 
			n = n & 0x8;
			break;
		case 5: 
			n = n & 0x10;
			break;
		case 6: 
			n = n & 0x20;
			break;
		case 7: 
			n = n & 0x40;
			break;
		case 8: 
			n = n & 0x80;
			break;
		case 9: 
			n = n & 0x100;
			break;
	}
}
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		memset(m, 0, sizeof(m));
		memset(line, 0, sizeof(line));
		memset(colum, 0, sizeof(colum));
		memset(maxti, 0, sizeof(maxti));
		int i, j;
		for(i = 1; i <= 9; i++)
			for(j = 1; j <= 9; j++){
				scanf("%d", &m[i][j]);
				if(m[i][j] == 0){

				}
				addbit(m[i][j], i, j);
			}




		printf("%d", *p);
	}
} 
