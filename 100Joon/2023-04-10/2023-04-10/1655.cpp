#include<iostream>
#include<queue>
using namespace std;

priority_queue<int, vector<int>, less<int>> minNums;
priority_queue<int, vector<int>, greater<int>> maxNums;
vector<int> nums;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if (minNums.size() > maxNums.size()) {
			maxNums.push(num);
		}
		else {
			minNums.push(num);
		}

		if (!maxNums.empty() && (minNums.top() > maxNums.top())) {
			int n1 = minNums.top();
			minNums.pop();
			int n2 = maxNums.top();
			maxNums.pop();
			minNums.push(n2);
			maxNums.push(n1);
		}
		
		nums.push_back(minNums.top());
	
	}

	for (auto a : nums) {
		cout << a << " ";
	}
}