#include<iostream>
#include<stack>
using namespace std;
int main() {
	int k;
	cin >> k;

	stack<int> nums;

	int sum = 0;
	for (int i = 0; i < k; i++) {
		int a;
		cin >> a;
		if (a == 0) {
			if(!nums.empty())
				nums.pop();
			continue;
		}
		nums.push(a);
	}

	while (!nums.empty()) {
		sum += nums.top();
		nums.pop();
	}
	cout << sum;
}