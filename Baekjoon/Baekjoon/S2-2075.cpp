#include<queue>
#include<iostream>
using namespace std;

int arr[1501][1501];
priority_queue<int, vector<int>, greater<int>> pq;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	int num;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> num;
			pq.push(num);
			if (pq.size() > n) pq.pop();
		}
	}
	cout << pq.top();
}
