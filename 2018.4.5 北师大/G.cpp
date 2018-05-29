#include <stdio.h>
#include <string.h>
#define MS 50
using namespace std;
char mina = 'a', maxa = 'z';
char minA = 'A', maxA = 'Z';
int change = 'a' - 'A'; //大转小
bool testa(char c){
	if(c >= mina && c <= maxa)
		return true;
	else 
		return false;
}
bool testA(char c){
	if(c >= minA && c <= maxA)
		return true;
	else 
		return false;
}
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		int i, j, n, slen, l = 0, index = 0, flag = 0;
		int count = 0, Acount = 0;
		char s[MS];
		char ans[MS];
		scanf("%s", s);
		slen = strlen(s);
		for(i = 1; i < slen; i++){
			if(testa(s[i])){
				count++;
			}
			else if(testA(s[i])){
				Acount++;
				if(count == 0){
					flag = 1;
					break;
				}
				else{
					count = 0;
					if(testa(s[l])){
						ans[index] = s[l];
					}
					else{
						ans[index] = s[l] + change;
					}	
					index++;
					for(j = l+1; j < i; j++){
						ans[index] = s[j];
						index++;
					}
					ans[index] = '_';
					index++;
					l = i;
				}
			}
			else{
				count = 0;
			}
		}
		if(testa(s[l])){
			ans[index] = s[l];
		}
		else{
			ans[index] = s[l] + change;
		}	
		index++;
		for(j = l+1; j < slen; j++){
			ans[index] = s[j];
			index++;
		}
		ans[index] = '\0';

		if(Acount == 0){
			printf("%s\n", s);
			continue;
		}
		if(count == 0){
			printf("%s\n", s);
			continue;
		}
		
		if(flag) printf("%s\n", s);
		else printf("%s\n", ans);
	}
}