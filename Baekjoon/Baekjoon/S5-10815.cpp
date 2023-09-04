#include<iostream>
#include<set>
#include<unordered_set>
#include<unordered_map>
using namespace std;

int n, m;
int main() {

	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	unordered_set<int> s1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int n;
		cin >> n;
		s1.insert(n);
	}

	cin >> m;
	for (int j = 0; j < m; j++) {
		int n;
		cin >> n;
		if (s1.find(n) != s1.end()) {
			cout << 1 << " ";
			continue;
		}
		cout << 0 << " ";
	}
}