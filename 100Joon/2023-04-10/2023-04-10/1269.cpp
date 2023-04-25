#include<iostream>
#include<map>
using namespace std;

map<int, int> nums;
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n + m; i++) {
		int num;
		cin >> num;
		nums[num]++;
	}
	int cnt = 0;
	for (auto a : nums) {
		if (a.second == 1)
			cnt++;
	}
	cout << cnt;
}