#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> a, b;
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		a.push_back(num);
	}

	cin >> m;

	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		b.push_back(num);
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < m; i++) {
		int cnt = upper_bound(a.begin(), a.end(), b[i]) - lower_bound(a.begin(), a.end(), b[i]);
		cout << cnt << " ";
	}
}