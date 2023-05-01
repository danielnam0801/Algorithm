#include<iostream>
using namespace std;

int main() {
	int n,w;
	int DP[101][101];
	int Cost[101][101];

	cin >> n >> w;
	int maxCost = -1;
	for (int i = 0; i < n; i++) {
		int wi, vi;
		cin >> wi >> vi;
		for (int j = 0; j < n; j++) {
			DP[i][j] += wi;
			if (DP[i][j] > w) {
				break;
			}
			Cost[i][j] += vi;
			if (maxCost < Cost[i][j]) {
				maxCost = Cost[i][j];
			}
		}
	}
	cout << maxCost;
}