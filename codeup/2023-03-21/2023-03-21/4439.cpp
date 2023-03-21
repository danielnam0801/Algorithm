//#include<iostream>
//#include<math.h>
//using namespace std;
//
//int n;
//int num;
//int idx = 0;
//int first, second;
//int* arr;
//int current = 0;
//
//void moving(int x1, int x2, int cnt) {
//	if (idx == num - 1 && arr[idx] == current) {
//		cout << cnt;
//		return;
//	}
//
//	if (arr[idx] == current) {
//		idx++;
//		if (current == x1) moving(current, x2, cnt);
//		else moving(x1, current, cnt);
//		return;
//	}
//
//	if (abs(x1 - arr[idx]) > abs(x2 - arr[idx]))
//		current = x2;
//	else if (abs(x1 - arr[idx]) < abs(x2 - arr[idx]))
//		current = x1;
//
//	if (arr[idx] > current) current += 1;
//	else current -= 1;
//
//	if (current == x1) {
//		cnt++;
//		moving(current, x2, cnt);
//	}
//	else {
//		cnt++;
//		moving(x1, current, cnt);
//	}
//
//	cout << cnt << " ";
//
//}
//
//int main() {
//	cin >> n;
//	cin >> first >> second;
//	cin >> num;
//	arr = new int[num];
//
//	for (int i = 0; i < num; i++) {
//		int input;
//		cin >> input;
//		arr[i] = input;
//	}
//
//	moving(first, second, 0);
//}

#include <iostream>
using namespace std;

int n, door1, door2, m;
int arr[21];
int answer = 9999;

void solve(int d1, int d2, int dis, int cnt) {
	if (m == cnt) {
		answer = min(answer, dis);
		return;
	}
	solve( arr[cnt], d2, dis + abs(d1 - arr[cnt]), cnt + 1);
	solve( d1, arr[cnt], dis + abs(d2 - arr[cnt]), cnt + 1);
}


int main() {
	cin >> n;
	cin >> door1 >> door2;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> arr[i];
	}
	solve(door1, door2, 0, 0);
	cout << answer;
}