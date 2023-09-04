#include <iostream>
#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main() {
	//1¹ø
	/*string s;
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

	*/
	//2¹ø

	string s1;
	string s2, s3;
	cin >> s1;

	for (int i = 0; i < s1.size(); i++) {
		s2 += s1[i];
	}

	for (int i = s1.size() - 1; i >= 0; i--) {
		s3 += s1[i];
	}

	(s2 == s3) ? cout << "1" : cout << "0";
}