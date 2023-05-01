#include<iostream>
#include<stack>

using namespace std;

int main() {
	string s;
	cin >> s;

	stack<int> indexNum;
	int s1 = 0;
	int s2 = 0;
	int s3 = 0;


	int cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
			indexNum.push(cnt);
			if (s[i] == '(') s1++;
			if (s[i] == '[') s2++;
			if (s[i] == '{') s3++;
		}
		if (s[i] == ')' || s[i] == ']' || s[i] == '}')
		{
			if (s[i] == ')') s1--;
			if (s[i] == ']') s2--;
			if (s[i] == '}') s3--;

			if (s1 < 0 || s2 < 0 || s3 < 0) {
				cout << "실패" << endl;
				return 0;
			}

			if (indexNum.empty()) {
				cout << "실패" << endl;
				return 0;
			}
			indexNum.pop();
		}
	}

	if (indexNum.empty()) {
		cout << "성공";
	}
}