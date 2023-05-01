#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

int main() {
	string s;
	cin >> s;

	stack<int> indexNum;

	int cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(') {
			cout << ++cnt;
			indexNum.push(cnt);
		}
		if (s[i] == ')') {
			cout << indexNum.top();
			indexNum.pop();
		}
	}
}