#include<iostream>
#include<queue>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	queue<int> str;
	for (int i = 0; i < n; i++) {
		string value;
		cin >> value;
		if (value == "push") {
			int num;
			cin >> num;
			str.push(num);
		}
		if (value == "pop") {
			if (str.empty()) cout << -1 << endl;
			else {
				cout << str.front() << endl;
				str.pop();
			}
		}
		if (value == "size") {
			cout << str.size() << endl;
		}
		if (value == "empty") {
			cout << str.empty() << endl;
		}
		if (value == "front") {
			if (str.empty()) cout << -1 << endl;
			else cout << str.front() << endl;
		}
		if (value == "back") {
			if (str.empty()) cout << -1 << endl;
			else cout << str.back() << endl;
		}

	}
}
