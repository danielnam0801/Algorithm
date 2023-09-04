#include <iostream>
using namespace std;

int main() {
	string s[5];
	for (int i = 0; i < 5; i++) {
		cin >> s[i];
		s[i].push_back(' ');
	}
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (s[j].size() <= i) continue;
			if (s[j][i] == ' ') continue;
			cout << s[j][i];
		}
	}
}