#include<iostream>
#include<stack>

using namespace std;

int main() {
	int n;
	cin >> n;
	stack<int> num;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		num.push(a);
	}

	for (int i = 0; i < n; i++) {
		cout << num.top() << " ";
		num.pop();
	}
}