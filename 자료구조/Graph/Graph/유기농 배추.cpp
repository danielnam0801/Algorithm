#include <iostream>
#include <vector>
using namespace std;
int testcase;
int row, col, num;
int board[51][51];
int visited[51][51];

int dx[]{ 0,0,1,-1 };
int dy[]{ 1,-1,0,0 };
void DFS(int x, int y) {
	for (int i = 0; i < 4; i++) {
		int nx = dx[i] + x;
		int ny = dy[i] + y;

		if (nx >= row || ny >= col || nx < 0 || ny < 0) continue;
		if (visited[nx][ny] == 1 || board[nx][ny] == 0) continue;
		visited[nx][ny] = 1;
		DFS(nx, ny);
	}
}

int main()
{
	cin >> testcase;
	while (testcase--) {
		fill_n(board[0], 51 * 51, 0);
		fill_n(visited[0], 51 * 51, 0);
		int cnt = 0;
		cin >> row >> col >> num;

		int x, y;
		for (int i = 0; i < num; i++) {
			cin >> x >> y;
			board[x][y] = 1;
		}

		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				if (board[i][j] == 1 && visited[i][j] == 0) {
					DFS(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
}