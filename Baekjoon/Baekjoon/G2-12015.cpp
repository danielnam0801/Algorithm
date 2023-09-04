#include<iostream>
#include<vector>

using namespace std;

int main() {
	int num;

	vector<int> nums;
	cin >> num;

	int c = 0;
	int cnt = 0;
	nums.push_back(-1);
	for (int i = 0; i < num; i++) {
		cin >> c;
		if (c > nums.back()) {
			nums.push_back(c);
			cnt++;
		}
		else {
			vector<int>::iterator iter
				= lower_bound(nums.begin(), nums.end(), c);
			*iter = c;
		}
	}
	cout << cnt;
}