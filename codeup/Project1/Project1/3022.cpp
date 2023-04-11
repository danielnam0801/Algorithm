#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

stack<char> a;
stack<char> b;

string a1, b1;
bool re = false;
int main() {
	cin >> a1 >> b1;

	
	if (a1.length() < b1.length()) {
		swap(a1, b1);
		re = true;
	}
	else if (b1.length() == a1.length() && b1 > a1) {
		swap(a1, b1);
		re = true;
	}

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

		if (aint < bint) {
			result.push_back((aint - bint + 10 + before) + '0');
			before = -1;
		}
		else if (aint == bint) {
			if (before == -1) {
				result.push_back('9');
				before = -1;
			}
			else {
				result.push_back('0');
				before = 0;
			}
		}
		else {
			result.push_back((aint - bint + before) + '0');
			before = 0;
		}

	}

	reverse(result.begin(), result.end());
	while (true) {
		if (result[0] != '0') break;
		else {
			result.erase(result.begin());
		}
	}
	if (a1 == b1) {
		cout << 0;
	}
	if (re) cout << '-' << result;
	else cout << result;
}