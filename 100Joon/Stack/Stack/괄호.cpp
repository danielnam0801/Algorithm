#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;
	stack<int> str;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if (num == 0) {
			str.pop();
		}
		else str.push(num);
	}

	int sum = 0;
	while (!str.empty()) {
		sum += str.top();
		str.pop();
	}

	cout << sum;
}

