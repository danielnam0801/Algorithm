#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n;
int main() {
	cin >> n;
	vector<int> nums;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		nums.push_back(num);
	}

	sort(nums.begin(), nums.end());

	cout << nums.front() << " " << nums.back();
}