#include<iostream>
#include<math.h>
using namespace std;


int cnt = 0;
int n;
int num;
int idx = 0;
int first, second;
int* arr;
int current = 0;

void moving(int x1, int x2) {
	if (idx == num-1 && arr[idx] == current) {
		cout << cnt;
		return;
	}
	if (arr[idx] == current) {
		idx++;
		if (current == x1) moving(current, x2);
		else moving(x1, current);
		return;
	}
	cnt++;
	
	if (abs(x1 - arr[idx]) > abs(x2 - arr[idx]))
		current = x2;
	else if(abs(x1 - arr[idx]) < abs(x2 - arr[idx]))
		current = x1;

	if (arr[idx] > current) current += 1;
	else current -= 1;

	if (current == x1) moving(current, x2);
	else moving(x1, current);
}

int main() {
	cin >> n;
	cin >> first >> second;
	cin >> num;
	arr = new int[num];

	for (int i = 0; i < num; i++) {
		int input;
		cin >> input;
		arr[i] = input;
	}

	moving(first, second);
}