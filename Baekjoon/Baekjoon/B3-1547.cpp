#include<iostream>
#include<vector>
#include<algorithm>
#include <unordered_map>

using namespace std;

int n, m;
int main() {

	cin >> n;
	unordered_map<int, int> cups;

	for (int i = 0; i <= 3; i++)
	{
		cups[i] = i;
	}

	int cup1, cup2;
	for (int i = 0; i < n; i++) {
		cin >> cup1 >> cup2;
		int temp = cups[cup1];
		cups[cup1] = cups[cup2];
		cups[cup2] = temp;
	}

	for (auto a : cups) {
		if (a.second == 1) {
			cout << a.first;
			break;
		}
	}
}