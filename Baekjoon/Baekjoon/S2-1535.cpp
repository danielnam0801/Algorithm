#include <string>
#include <vector>
#include <iostream>

using namespace std;

int DP[21][101];
int v[21];
int h[21];

int main() {
	int hp = 100;

	int n;
	cin >> n;



	for (int i = 1; i <= n; i++) {
		cin >> v[i];
	}
	for (int i = 1; i <= n; i++) {
		cin >> h[i];
	}


	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 100; j++) {
			if (v[i] >= j) {
				DP[i][j] = DP[i - 1][j];
			}
			else {
				DP[i][j] = max(DP[i - 1][j], DP[i - 1][j - v[i]] + h[i]);
			}
		}
	}

	cout << DP[n][100];

}