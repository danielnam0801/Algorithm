#include<iostream>
#include<vector>
#include<algorithm>
#include <unordered_map>
#include <map>

using namespace std;

int n, m;
int main() {
	unordered_map<int, int> nums;
	cin >> n >> m;
	for (int i = 0; i < n + m; i++) {
		int num;
		cin >> num;
		nums[num]++;
	}

	int cnt = 0;
	for (auto a : nums) {
		if (a.second == 1) cnt++;
	}

	cout << cnt;
}
