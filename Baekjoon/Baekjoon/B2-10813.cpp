#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n, m;
int main() {
	cin >> n >> m;

	vector<int> nums;

	for (int i = 1; i <= n; i++)
	{
		nums.push_back(i);
	}

	int idx1, idx2;
	for (int i = 0; i < m; i++) {
		cin >> idx1 >> idx2;
		idx1 -= 1;
		idx2 -= 1;
		int temp = nums[idx1];
		nums[idx1] = nums[idx2];
		nums[idx2] = temp;
	}

	for (auto num : nums) {
		cout << num << " ";
	}
}