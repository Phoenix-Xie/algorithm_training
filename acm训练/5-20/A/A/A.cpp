// A.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <vector>
#define MS 1010
using namespace std;

vector <int> v[MS];
int leafNum[MS];
bool isleaf[MS];
bool search(int x) {
	int i;
	//cout << x << endl;
	if (isleaf[x]) return true;
	for (i = 0; i < int(v[x].size()); i++) {
		if (search(v[x][i])) {
			leafNum[x]++;
		}
	}
	return false;
}

int main() {
	int n;
	cin >> n;
	int i, t;
	for (i = 1; i <= n; i++) isleaf[i] = true;
	for (i = 2; i <= n; i++) {
		cin >> t;
		v[t].push_back(i);
		isleaf[t] = false;
	}
	search(1);
	int ans = 1;
	for (i = 1; i <= n; i++) {
		//cout << leafNum[i] << endl;
		//for (i = 1; i <= n; i++) cout << isleaf[i] << endl;
		if (isleaf[i] || leafNum[i] >= 3);
		else {
			ans = 0;
			break;
		}
	}
	if (ans) cout << "Yes" << endl;
	else cout << "No" << endl;
	getchar();
	getchar();
}


