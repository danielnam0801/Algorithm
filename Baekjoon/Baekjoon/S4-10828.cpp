#include<iostream>
#include<stack>
using namespace std;

int main() {
	int n;
	cin >> n;
	stack<int> str;
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
				cout << str.top() << endl;
				str.pop();
			}
		}
		if (value == "size") {
			cout << str.size() << endl;
		}
		if (value == "empty") {
			cout << str.empty() << endl;
		}
		if (value == "top") {
			if (str.empty()) cout << -1 << endl;
			else cout << str.top() << endl;
		}
	}
}
