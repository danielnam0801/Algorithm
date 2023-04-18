#include<iostream>
#include<deque>
#include<string>
using namespace std;

deque<int> a;
deque<int> b;
int result = 0;
string s;

int main() {
	cin >> s;

	int cnt = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'A')
			a.push_back(i);
		if (s[i] == 'B')
			b.push_back(i);
		if (s[i] == 'C') {
			if (!b.empty() && b.front() < i) {
				b.pop_front();
				result++;
			}
		}
	}

	while (!a.empty() && !b.empty()) {
		if (a.front() < b.front()) {
			result++;
			a.pop_front();
			b.pop_front();
		}
		else {
			b.pop_front();
		}
	}

	cout << result;
}