#include <iostream>
using namespace std;

int n, k;
int countRoute = 0;

int route[40][40][40];
int check[40][40][40];

int solve(int x, int x2, int y) {
	if (x > n || y >= k || x2 > n)
		return 0;
	if (x == n && x2 == n)
		return 1;
	if (check[x][x2][y] == 1) return route[x][x2][y];
	check[x][x2][y] = 1;
	return route[x][x2][y] = solve(x + 1, x2 + 1, y + 1) + solve(x + 2, x2 + 1, y + 1) +
		solve(x + 1, x2 + 2, y + 1) + solve(x + 2, x2 + 2, y + 1);
}

int main() {
	cin >> n >> k;
	cout << solve(0, 0, 0);
}