#include<iostream>
#include <stack>
using namespace std;

bool IsGoodWord(string s) {
	stack<char> a;
	a.push(s[0]);
	for (int i = 1; i < s.size(); i++) {
		if (!a.empty() && (a.top() == s[i]))
			a.pop();
		else
			a.push(s[i]);
	}

	if (a.empty()) return true;
	else return false;
}

int main() {
	int n, cnt = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (IsGoodWord(s)) cnt++;
	}

	cout << cnt;
}