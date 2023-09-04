#include<iostream>
#include<stack>
using namespace std;

int main() {
	int n;
	cin >> n;
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
