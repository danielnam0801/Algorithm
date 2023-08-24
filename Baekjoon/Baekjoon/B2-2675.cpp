#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		string s;
		cin >> a >> s;
		for (int j = 0; j < s.size(); j++) {
			for (int h = 0; h < a; h++)
				cout << s[j];
		}
		cout << endl;
		s.clear();
	}
}