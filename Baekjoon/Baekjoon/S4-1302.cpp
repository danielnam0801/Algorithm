#include <map>
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	map<string, int> books;

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		books[s]++;
	}

	string bestSeller;
	int maxValue = -1;
	for (auto value : books) {
		if (maxValue < value.second) {
			maxValue = value.second;
			bestSeller = value.first;
		}
	}

	cout << bestSeller;
}