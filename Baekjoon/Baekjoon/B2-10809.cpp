#include <iostream>
using namespace std;

int main() {
	char a[26]{ 'a' };
	int index[26];
	int choose[150] = { 0 };
	for (int i = 0; i < 26; i++) {
		a[i] = 97 + i;
		index[i] = -1;
	}

	string s;
	cin >> s;
	int* indexy = new int[s.length()];
	// �ߺ��� ��� ����ó�� �ؾ���
	int idx = 0;
	int correct = 0;
	for (auto word : s) {
		int cnt = 0;
		for (auto j : a) {
			if (word == j && choose[j] == 0) {
				choose[j]++;
				index[cnt] = idx;
			}
			cnt++;
		}
		idx++;
	}

	for (int i = 0; i < 26; i++) {
		cout << index[i] << " ";
	}
}