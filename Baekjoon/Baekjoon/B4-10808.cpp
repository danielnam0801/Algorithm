#include <iostream>
#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main() {
	string s;
	cin >> s;

	map<char, int> cnt;

	for (int i = 97; i <= 122; i++) {
		cnt[i] = 0;
	}

	for (int i = 0; i < s.size(); i++) {
		cnt[s[i]]++;
	}

	for (auto i : cnt) {
		cout << i.second << " ";
	}


}