#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
#include <vector>
#include <set>
#include <unordered_set>

using namespace std;

int main() {
	int noHearPeopleCnt;
	int noSeePeopleCnt;

	unordered_set<string> s;
	set<string> s2;

	cin >> noHearPeopleCnt >> noSeePeopleCnt;

	int totalcnt = noHearPeopleCnt + noSeePeopleCnt;

	int cnt = 0;

	string peopleName;
	for (int i = 0; i < totalcnt; i++) {
		cin >> peopleName;

		if (s.find(peopleName) != s.end()) {
			cnt++;
			s2.insert(peopleName);
		}

		s.insert(peopleName);
	}
	cout << cnt << endl;

	for (auto a : s2) {
		cout << a << endl;

	}
}