// AC自动机.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <utility>
#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_SIZE 26
#define MS 55
#define ll long long
#define QSIZE 300000

struct node {
	node *fail;
	node *child[MAX_SIZE];
	int point; // 标记是哪个单词结尾，不是结尾用-1；
	node() {
		fail = NULL;
		for (ll i = 0; i < MAX_SIZE; i++) child[i] = NULL;
		point = -1;
	}
};
node *Root = new node();
void insert(char s[], ll num) {
	node *p = Root;
	for (ll i = 0; s[i] != '\0'; i++) {
		ll t = s[i] - 'a';
		if (p->child[t] == NULL) {
			p->child[t] = new node;
		}
		p = p->child[t];
		if (s[i + 1] == '\0') p->point = num;
	}
}

ll max_deepth = 0;
ll point_num = 0;
void travel(node * current, ll deepth) {
	point_num++;
	for (ll i = 0; i < MAX_SIZE; i++) {
		if (current->child[i] != NULL) {
			travel(current->child[i], deepth + 1);
		}
	}
	if(current->point != -1)
		max_deepth = max(deepth, max_deepth);
}

int main()
{
	ll n;
	char s[MS];
	cin >> n;
	for (ll i = 0; i < n; i++) {
		cin >> s;
		insert(s, i);
	}
	travel(Root, 0);
	//cout << point_num << max_deepth << n << endl;
	ll ans = (point_num-1) * 2 - max_deepth + n; //加上n次print操作
	cout << ans << endl;
    return 0;
}

