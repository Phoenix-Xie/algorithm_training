#include <stdio.h>
#define SIZE 100
int heap[SIZE], n; //堆数组 堆指标
void swap(int &a, int &b);
void up(int p);
void down(int p);
void Insert(int val);
int GetTop();
void Extract();
void Remove(int p);

int main(){
	n = 0;
	Insert(1);
	Insert(2);
	Insert(3);
	Remove(1);
	printf("%d\n", GetTop());
	for(int i = 1 ; i <= n; i++) printf("%d ", heap[i]);
}

void swap(int &a, int &b){
	int t = a;
	a = b; 
	b = t;
}

void up(int p){
	while(p > 1){
		if(heap[p] < heap[p>>1]){
			swap(heap[p], heap[p>>1]);
			p /= 2;
		}
		else break;
	}
}

void Insert(int val){
	n++;
	heap[n] = val;
	up(n);
}
int GetTop(){
	return heap[1];
}
void Extract(){
	swap(heap[1], heap[n]);
	n--;
	down(1);
}
void down(int p){
	int s = p*2;
	while(s < n){
		if(heap[s] > heap[s+1]) s++;
		if(heap[s] > heap[p]){
			swap(heap[s], heap[p]);
			p = s; 
			s = p*2;
		}
		else break;
	}
}

void Remove(int p){
	swap(heap[p], heap[n]);
	n--;
	up(p);
	down(p);
}
