// vs专属.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <cstdio>
#include <iostream>
#include <memory>
#include <queue>
#define ll long long
#define MS 1000
#define _CRT_SECURE_NO_WARNINGS
using namespace std;


char m[MS][MS];
int v[MS][MS];

ll x_change[] = { 1,0,-1,0 };
ll y_change[] = { 0,1,0,-1 };
bool up_state[] = { 1,0,1,0 };

ll up;
ll right;

// 0失败，1空，2前进过桥，3等待
// 0失败，其他数字表示前进格数
ll bridge(ll x, ll y, ll dir_x	,ll dir_y,ll time) {
	ll xx, yy;
	bool upDown;
	if (x != 0) upDown = true;
	else upDown = false;

	while (1) {
		xx = x + dir_x;
		yy = y + dir_y;
		if (m[x][y] == '-') {
			if ((upDown && (time & 1)) || (!upDown && (time & 0))) {
				return 2;
			}
			else return 3;
		}
		else { //m[x][y] = '|'
			if ((upDown && (time & 1)) || (!upDown && (time & 0))) {
				return 2;
			}
			else return 3;
		}
	}
}

ll check(ll x, ll y, ll time, bool upDown) {
	if (v[x][y] || m[x][y] == '*' || x > up || x < 0 || y < 0 || y > right)
		return 0;
	else if (m[x][y] == ' ')
		return 1;
	else if (m[x][y] == '-') {
		if ( (upDown && (time & 1)) || (!upDown && (time & 0)) ) {
			return 2;
		}
		else return 3;
	}
	else { //m[x][y] = '|'
		if ( (upDown && (time & 1)) || (!upDown && (time & 0)) ){
			return 2;
		}
		else return 3;
	}
}
queue <ll> qx, qy, qt;
ll bfs(ll x, ll y, ll t) {
	ll i;
	v[x][y] = 1;
	qx.push(x);
	qy.push(y);
	qt.push(t);
	while (!qx.empty()) {
		x = qx.front(); qx.pop();
		y = qy.front(); qy.pop();
		t = qt.front(); qt.pop();
		for (i = 0; i < 4; i++) {
			ll xx = x + x_change[i];
			ll yy = y + y_change[i];
			ll statu = check(xx, yy, t, up_state[i]);
			if (statu == 1) {
				v[xx][yy] = 1;
				qx.push(xx); qy.push(yy); qt.push(t + 1);
			}
			else if (statu == 2) {
				qx.push(xx); qy.push(yy); qt.push(t + 1);
			}
			else if(statu == 3){
				qx.push(x); qy.push(y); qt.push(t + 1);
			}
			else;
		}
	}
}

int main() {
	ll n;
	
}
