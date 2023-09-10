#include<iostream>
#include <vector>
#include <queue>
using namespace std;


int n, m, k, x;
int main() {
	queue<int> q;
	vector<vector<int>> adj;
	vector<int> answer;

	cin >> n >> m >> k >> x;

	adj.resize(n, vector<int>(n + 1));
		
	q.push(0);
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		for (int j = 0; j < adj[now].size(); j++) {
			if (adj[now][j] < ) {

			}
		}
	}
}