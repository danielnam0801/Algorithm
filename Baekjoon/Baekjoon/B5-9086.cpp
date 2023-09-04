#include <iostream>
using namespace std;

int main() {
	int i;
	cin >> i;

	string* str = new string[i];
	for (int j = 0; j < i; j++) {
		cin >> str[j];
	}

	for (int f = 0; f < i; f++) {
		int length = str[f].length();
		string c = "ab";
		c[0] = str[f][0];
		c[1] = str[f][length - 1];

		str[f] = c;

		cout << str[f] << endl;
	}
}