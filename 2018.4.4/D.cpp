#include <stdio.h>
#define MS 100010
using namespace std;
int x[4], y[4];
int l[MS][2];
int point[MS][6];
bool IsLine1(int x,int y){
	if((x-x[0])*(y[0] - y[1]) == (y-y[0])*(x[0] - x[1])){
		return true;
	}
	return false;
}
bool IsLine2(int x,int y){
	if((x-x[1])*(y[1] - y[2]) == (y-y[1])*(x[1] - x[2])){
		return true;
	}
	return false;
}
bool IsLine3(int x,int y){
	if((x-x[0])*(y[0] - y[2]) == (y-y[0])*(x[0] - x[2])){
		return true;
	}
	return false;
}
bool IsLine4(int x,int y){
	if((x-x[0])*(y[0] - y[4]) == (y-y[0])*(x[0] - x[4])){
		return true;
	}
	return false;
}
bool IsLine5(int x,int y){
	if((x-x[1])*(y[1] - y[4]) == (y-y[1])*(x[1] - x[4])){
		return true;
	}
	return false;
}
bool IsLine6(int x,int y){
	if((x-x[2])*(y[2] - y[4]) == (y-y[2])*(x[2] - x[4])){
		return true;
	}
	return false;
}
bool 
int main(){
	int n;

	while(scanf("%d", &n)){
	 	int i;
	 	int count[6] = {0};
	 	for(i = 0 ; i < n; i++) scanf("%d%d", &l[i][0], &l[i][1]);
	 	x[0] = l[0][0]; 
	 	y[0] = l[0][1];
	 	x[1] = l[1][0];
	 	y[1] = l[1][1];
	 	count[0]+=2;
	 	for(i = 2; i < n; i++){
	 		if(!IsLine1(l[i][0], l[i][1])){
	 			x[2] = l[i][0];
	 			y[2] = l[i][1];
	 			break;
	 		}
	 	}
	 	count[1]++;
	 	count[2]++;
	 	i++;
	 	for(; i < n; i++){
	 		if(IsLine1(l[i][0], l[i][1])){
	 			count[0]++;
	 		}
	 		else if(IsLine1(l[i][0], l[i][1])){
	 			count[1]++;
	 		}
	 		else if(IsLine1(l[i][0], l[i][1])){
	 			count[2]++;
	 		}
	 		else{
	 			x[3] = l[i][0];
	 			y[3] = l[i][1];
	 			break;
	 		}
	 	}
	 	count[3] = 2;
	 	count[4] = 2;
	 	count[5] = 2;

	 	int flag = 1;
	 	for(;i < n; i++){
	 		if(!IsLine1(l[i][0], l[i][1]) && !IsLine2(l[i][0], l[i][1])){
	 			flag = 0;
	 			break;
	 		}
	 	}
	 	if(flag){
	 		printf("YES\n");
	 	}
	 	else{
	 		printf("NO\n");
	 	}
	}
}