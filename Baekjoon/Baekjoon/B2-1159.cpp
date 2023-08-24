#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	int arr[26] = {};
	int cnt1 = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		string castle;
		cin >> castle;
		//int m = castle[0] - 'a';
		arr[castle[0] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		if (arr[i] >= 5) {
			cout << (char)(i + 'a');
			cnt1++;
		}
	}

	if (cnt1 == 0) {
		cout << "PREDAJA";
	}

}