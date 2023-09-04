#include<deque>	
#include<iostream>
#include <vector>
using namespace std;

deque<int> nums;
int main() {
	int cnt;
	cin >> cnt;

	int num;

	vector<int> skills;
	skills.resize(cnt);
	for (int i = cnt - 1; i >= 0; i--) {
		cin >> skills[i];
	}

	for (int i = 0; i < cnt; i++) {
		if (skills[i] == 1) {
			nums.push_front(i + 1);
		}
		else if (skills[i] == 2) {
			int temp = nums.front();
			nums.pop_front();
			nums.push_front(i + 1);
			nums.push_front(temp);
		}
		else if (skills[i] == 3) {
			nums.push_back(i + 1);
		}
	}

	deque<int>::iterator iter = nums.begin();
	for (; iter != nums.end(); iter++) {
		cout << *iter << ' ';
	}
}