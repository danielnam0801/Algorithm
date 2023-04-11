#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

stack<char> a;
stack<char> b;

string a1, b1;
int main() {
	cin >> a1 >> b1;
	for (int i = 0; i < a1.size(); i++) {
		a.push(a1[i]);
	}
	for (int i = 0; i < b1.size(); i++) {
		b.push(b1[i]);
	}

	string result;
	int before = 0;
	while (!a.empty() || !b.empty()) {

		int aint, bint;
		if (!a.empty()) {
			aint = a.top() - '0';
			a.pop();
		}
		else {
			aint = 0;
		}
		if (!b.empty()) {
			bint = b.top() - '0';
			b.pop();
		}
		else {
			bint = 0;
		}

		if (aint + bint + before > 9) {
			result.push_back((aint + bint - 10 + before) + '0');
			before = 1;
		}
		else {
			result.push_back((aint + bint + before) + '0');
			before = 0;
		}
		
	}

	if (before == 1)
	{
		result.push_back('1');
	}
	reverse(result.begin(), result.end());

	cout << result;
}